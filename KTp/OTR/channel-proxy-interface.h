/*
 * This file contains D-Bus client proxy classes generated by qt-client-gen.py.
 *
 * This file can be distributed under the same terms as the specification from
 * which it was generated.
 */

#ifndef OTR_CHANNEL_PROXY_HEADER
#define OTR_CHANNEL_PROXY_HEADER

#include "ktpotr_export.h"

#include <QtGlobal>

#include <QString>
#include <QObject>
#include <QVariant>

#include <QDBusPendingReply>

#include <TelepathyQt/Types>
#include <TelepathyQt/AbstractInterface>
#include <TelepathyQt/DBusProxy>
#include <TelepathyQt/Global>

namespace Tp
{
class PendingVariant;
class PendingOperation;
}

namespace KTp
{
namespace Client
{

/**
 * \class ChannelProxyInterfaceOTRInterface
 * \headerfile TelepathyQt/channel-proxy.h <TelepathyQt/ChannelProxy>
 * \ingroup clientchannelproxy
 *
 * Proxy class providing a 1:1 mapping of the D-Bus interface "org.kde.TelepathyProxy.ChannelProxy.Interface.OTR".
 */
class KTPOTR_EXPORT ChannelProxyInterfaceOTRInterface : public Tp::AbstractInterface
{
    Q_OBJECT

public:
    /**
     * Returns the name of the interface "org.kde.TelepathyProxy.ChannelProxy.Interface.OTR", which this class
     * represents.
     *
     * \return The D-Bus interface name.
     */
    static inline QLatin1String staticInterfaceName()
    {
        return QLatin1String("org.kde.TelepathyProxy.ChannelProxy.Interface.OTR");
    }

    /**
     * Creates a ChannelProxyInterfaceOTRInterface associated with the given object on the session bus.
     *
     * \param busName Name of the service the object is on.
     * \param objectPath Path to the object on the service.
     * \param parent Passed to the parent class constructor.
     */
    ChannelProxyInterfaceOTRInterface(
        const QString& busName,
        const QString& objectPath,
        QObject* parent = 0
    );

    /**
     * Creates a ChannelProxyInterfaceOTRInterface associated with the given object on the given bus.
     *
     * \param connection The bus via which the object can be reached.
     * \param busName Name of the service the object is on.
     * \param objectPath Path to the object on the service.
     * \param parent Passed to the parent class constructor.
     */
    ChannelProxyInterfaceOTRInterface(
        const QDBusConnection& connection,
        const QString& busName,
        const QString& objectPath,
        QObject* parent = 0
    );

    /**
     * Creates a ChannelProxyInterfaceOTRInterface associated with the same object as the given proxy.
     *
     * \param proxy The proxy to use. It will also be the QObject::parent()
     *               for this object.
     */
    ChannelProxyInterfaceOTRInterface(Tp::DBusProxy *proxy);

    /**
     * Creates a ChannelProxyInterfaceOTRInterface associated with the same object as the given proxy.
     * Additionally, the created proxy will have the same parent as the given
     * proxy.
     *
     * \param mainInterface The proxy to use.
     */
    explicit ChannelProxyInterfaceOTRInterface(const Tp::AbstractInterface& mainInterface);

    /**
     * Creates a ChannelProxyInterfaceOTRInterface associated with the same object as the given proxy.
     * However, a different parent object can be specified.
     *
     * \param mainInterface The proxy to use.
     * \param parent Passed to the parent class constructor.
     */
    ChannelProxyInterfaceOTRInterface(const Tp::AbstractInterface& mainInterface, QObject* parent);

    /**
     * Asynchronous getter for the remote object property \c WrappedChannel of type \c QDBusObjectPath.
     *
     *
     * \htmlonly
     * <p>Object path of the channel this proxy is created for.</p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyWrappedChannel() const
    {
        return internalRequestProperty(QLatin1String("WrappedChannel"));
    }

    /**
     * Asynchronous getter for the remote object property \c Connected of type \c bool.
     *
     *
     * \htmlonly
     * <p>TRUE if the proxy is connected</p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyConnected() const
    {
        return internalRequestProperty(QLatin1String("Connected"));
    }

    /**
     * Asynchronous getter for the remote object property \c PendingMessages of type \c Tp::MessagePartListList.
     *
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelInterfaceMessagesInterface \htmlonly
     * </p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyPendingMessages() const
    {
        return internalRequestProperty(QLatin1String("PendingMessages"));
    }

    /**
     * Asynchronous getter for the remote object property \c TrustLevel of type \c uint.
     *
     *
     * \htmlonly
     * <p>The current trust level of this channel:
     *     0=TRUST_NOT_PRIVATE, 1=TRUST_UNVERIFIED, 2=TRUST_PRIVATE,
     *     3=TRUST_FINISHED</p>
     * <p>Clients MUST listen to PropertiesChanged to update UI when trust
     * level changes.</p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyTrustLevel() const
    {
        return internalRequestProperty(QLatin1String("TrustLevel"));
    }

    /**
     * Asynchronous getter for the remote object property \c LocalFingerprint of type \c QString.
     *
     *
     * \htmlonly
     * <p>User's current fingerprint. The first element is a human readable
     * fingerprint that can be displayed to the user so he can communicate it
     * to the other end by other means so he can trust it. The 2nd element is
     * the fingerprint raw data.</p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyLocalFingerprint() const
    {
        return internalRequestProperty(QLatin1String("LocalFingerprint"));
    }

    /**
     * Asynchronous getter for the remote object property \c RemoteFingerprint of type \c QString.
     *
     *
     * \htmlonly
     * <p>The current fingerprint of the remote contact. Should be displayed
     *   to the user to update its trust level. It is shown in human readable format i.e.
     *   :e '12345678 12345678 12345678 12345678 12345678'.</p>
     * \endhtmlonly
     *
     * \return A pending variant which will emit finished when the property has been
     *          retrieved.
     */
    inline Tp::PendingVariant *requestPropertyRemoteFingerprint() const
    {
        return internalRequestProperty(QLatin1String("RemoteFingerprint"));
    }

    /**
     * Request all of the DBus properties on the interface.
     *
     * \return A pending variant map which will emit finished when the properties have
     *          been retrieved.
     */
    Tp::PendingVariantMap *requestAllProperties() const
    {
        return internalRequestAllProperties();
    }

public Q_SLOTS:
    /**
     * Begins a call to the D-Bus method \c ConnectProxy on the remote object.
     *
     * Connect to the otr proxy. From now on all data which is modified by it
     * should be acquired from the proxy, not from the underlying channel.
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> ConnectProxy(int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("ConnectProxy"));
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c DisconnectProxy on the remote object.
     *
     * Turns off proxy if one is connected.
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> DisconnectProxy(int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("DisconnectProxy"));
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c SendMessage on the remote object.
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly org.freedesktop.Telepathy.Channel.Interface.Messages.Sent \htmlonly
     * </p>
     * \endhtmlonly
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<QString> SendMessage(const Tp::MessagePartList& message, uint flags, int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<QString>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("SendMessage"));
        callMessage << QVariant::fromValue(message) << QVariant::fromValue(flags);
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c AcknowledgePendingMessages on the remote object.
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelTypeTextInterface \htmlonly
     * </p>
     * \endhtmlonly
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> AcknowledgePendingMessages(const Tp::UIntList& IDs, int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("AcknowledgePendingMessages"));
        callMessage << QVariant::fromValue(IDs);
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c Initialize on the remote object.
     *
     * Start an OTR session for this channel if the remote end supports it has
     * well.
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> Initialize(int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("Initialize"));
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c Stop on the remote object.
     *
     * Stops the OTR session.
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> Stop(int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("Stop"));
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c TrustFingerprint on the remote object.
     *
     * Set whether or not the user trusts the given fingerprint. It has to be
     * the fingerprint the remote contact is currently using.
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     *
     * \param fingerprint
     *
     *     The fingerprint in format: &apos;12345678 12345678 12345678
     *     12345678 12345678&apos;
     *
     * \param trust
     *
     *     %TRUE if trusted, %FALSE otherwise.
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> TrustFingerprint(const QString& fingerprint, bool trust, int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("TrustFingerprint"));
        callMessage << QVariant::fromValue(fingerprint) << QVariant::fromValue(trust);
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c StartPeerAuthentication on the remote object.
     *
     * \htmlonly
     * <p>This method starts peer authentication using the Socialist
     *   Millionaire protocol.</p>
     * \endhtmlonly
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     *
     * \param question
     *
     *     The question to be used for peer authentication. It is used by the
     *     remote peer as a hint for the shared secret. If an empty string is
     *     passed only the shared secret will be used on the peer
     *     authentication process.
     *
     * \param secret
     *
     *     The shared secret to be used for peer authentication. If the
     *     Question parameter is not empty, this should be the answer to it.
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> StartPeerAuthentication(const QString& question, const QString& secret, int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("StartPeerAuthentication"));
        callMessage << QVariant::fromValue(question) << QVariant::fromValue(secret);
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c RespondPeerAuthentication on the remote object.
     *
     * \htmlonly
     * <p>This method continues the peer authentication started by the remote
     *   peer.</p>
     * \endhtmlonly
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     *
     * \param secret
     *
     *     The shared secret to be used for peer authentication.
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> RespondPeerAuthentication(const QString& secret, int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("RespondPeerAuthentication"));
        callMessage << QVariant::fromValue(secret);
        return this->connection().asyncCall(callMessage, timeout);
    }

    /**
     * Begins a call to the D-Bus method \c AbortPeerAuthentication on the remote object.
     *
     * \htmlonly
     * <p>This method aborts the peer authentication process.</p>
     * \endhtmlonly
     *
     * Note that \a timeout is ignored as of now. It will be used once
     * http://bugreports.qt.nokia.com/browse/QTBUG-11775 is fixed.
     *
     * \param timeout The timeout in milliseconds.
     */
    inline QDBusPendingReply<> AbortPeerAuthentication(int timeout = -1)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }

        QDBusMessage callMessage = QDBusMessage::createMethodCall(this->service(), this->path(),
                this->staticInterfaceName(), QLatin1String("AbortPeerAuthentication"));
        return this->connection().asyncCall(callMessage, timeout);
    }

Q_SIGNALS:
    /**
     * Represents the signal \c MessageSent on the remote object.
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelInterfaceMessagesInterface \htmlonly
     * </p>
     * \endhtmlonly
     */
    void MessageSent(const Tp::MessagePartList& content, uint flags, const QString& messageToken);

    /**
     * Represents the signal \c MessageReceived on the remote object.
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelInterfaceMessagesInterface \htmlonly
     *   Plus:
     *   <p>The OTR interface adds some additional keys to message headers.
     *     Messages sent during an encrypted OTR session have an additional
     *     'otr-remote-fingerprint' header, whose string value is the
     *     human-readable hex form of an OTR fingerprint:</p>
     *
     *   <code>
     *     {
     *     'message-type': Channel_Text_Message_Type_Normal,
     *     'message-sender': 42,               # Contact_Handle of mercutio@example.com
     *     'otr-remote-fingerprint': '12345678 12345678 12345678 12345678 12345678',
     *     },
     *     {
     *     'content-type': 'text/plain',
     *     'content': 'O, then, I see Queen Mab hath been with you.',
     *     }
     *   </code>
     *
     *   <p>Logging infrastructure MAY use these headers to associate
     *     conversations with OTR users in a secure way, or to avoid
     *     logging OTR conversations at all.</p>
     *
     *   <p>Messages generated internally by the OTR implementation have an
     *     additional &quot;otr-message-event&quot; key in the header (0'th part) whose
     *     value is the OtrlMessageEvent, and SHOULD be
     *     of type Channel_Text_Message_Type_Notice. These messages do not have id
     *     and should not be acknowledged:</p>
     *
     *   <code>
     *     {
     *     'message-type': Channel_Text_Message_Type_Notice,
     *     'message-sender': 42,               # Contact_Handle of mercutio@example.com
     *     'otr-message-event': OTRL_MSGEVENT_RCVDMSG_UNRECOGNIZED,
     *     'otr-remote-fingerprint': '12345678 12345678 12345678 12345678 12345678',
     *     },
     *     {
     *     'content-type': 'text/plain',
     *     'content': 'Unrecognized OTR message received from mercutio@example.com',
     *     }
     *   </code>
     *
     *   <p>User interfaces that implement OTR MUST present these special
     *     notices in a way that cannot be faked by the remote user
     *     sending a crafted XMPP (or other protocol) notice.</p>
     *
     *   <p>For OTRL_MSGEVENT_SETUP_ERROR or OTRL_MSGEVENT_RCVDMSG_GENERAL_ERR
     *     events, the header SHOULD additionally contain an &quot;otr-error&quot;
     *     key whose string value is a debug message.</p>
     *
     *   <p>For OTRL_MSGEVENT_RCVDMSG_UNENCRYPTED events, the header
     *     MUST additionally contain an &quot;otr-unencrypted-message&quot; key
     *     whose string value is the unencrypted message.</p>
     * </p>
     * \endhtmlonly
     */
    void MessageReceived(const Tp::MessagePartList& message);

    /**
     * Represents the signal \c PendingMessagesRemoved on the remote object.
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelInterfaceMessagesInterface \htmlonly
     * </p>
     * \endhtmlonly
     */
    void PendingMessagesRemoved(const Tp::UIntList& messageIDs);

    /**
     * Represents the signal \c PeerAuthenticationRequested on the remote object.
     *
     * Emitted when peer authentication has been requested by the remote peer.
     *
     * \param question
     *
     *     The question the remote peer is using for peer authentication. If
     *     an empty string is passed only the shared secret will be used on
     *     the peer authentication process.
     */
    void PeerAuthenticationRequested(const QString& question);

    /**
     * Represents the signal \c PeerAuthenticationConcluded on the remote object.
     *
     * Emitted when the peer authentication process finishes normally.
     *
     * \param authenticated
     *
     *     True if peer identity could be authenticated, false otherwise.
     */
    void PeerAuthenticationConcluded(bool authenticated);

    /**
     * Represents the signal \c PeerAuthenticationInProgress on the remote object.
     *
     * Emitted when the peer authentication process has entered next stage.
     */
    void PeerAuthenticationInProgress();

    /**
     * Represents the signal \c PeerAuthenticationAborted on the remote object.
     *
     * Emitted when the peer authentication process has been aborted by the
     * remote peer.
     */
    void PeerAuthenticationAborted();

    /**
     * Represents the signal \c PeerAuthenticationError on the remote object.
     *
     * Emitted when the peer authentication process has been aborted because a
     * protocol error has occured.
     */
    void PeerAuthenticationError();

    /**
     * Represents the signal \c PeerAuthenticationCheated on the remote object.
     *
     * Emitted when the peer authentication process has been aborted because
     * cheating was discovered.
     */
    void PeerAuthenticationCheated();

    /**
     * Represents the signal \c SessionRefreshed on the remote object.
     *
     * An AKE has been performed in an already established session.
     */
    void SessionRefreshed();

    /**
     * Represents the signal \c TrustLevelChanged on the remote object.
     *
     * \htmlonly
     * OTR state of the connection has changed.
     * \endhtmlonly
     */
    void TrustLevelChanged(uint trustLevel);

protected:
    virtual void invalidate(Tp::DBusProxy *, const QString &, const QString &);
};
}
}
Q_DECLARE_METATYPE(KTp::Client::ChannelProxyInterfaceOTRInterface*)
#endif
