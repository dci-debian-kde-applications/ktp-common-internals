#ifndef KTP_PROXY_SVC_CHANNEL_PROXY_HEADER
#define KTP_PROXY_SVC_CHANNEL_PROXY_HEADER

/*
 * This file contains D-Bus adaptor classes generated by qt-svc-gen.py.
 *
 * This file can be distributed under the same terms as the specification from
 * which it was generated.
 */

#include <TelepathyQt/AbstractAdaptor>
#include <TelepathyQt/Global>
#include <TelepathyQt/Types>

#include <QObject>
#include <QtDBus>

namespace Tp
{
namespace Service
{

/**
 * \class ChannelProxyInterfaceOTRAdaptor
 * \headerfile TelepathyQt/_gen/svc-channel-proxy.h <TelepathyQt/_gen/svc-channel-proxy.h>
 * \ingroup servicechannelproxy
 *
 * Adaptor class providing a 1:1 mapping of the D-Bus interface "org.kde.TelepathyProxy.ChannelProxy.Interface.OTR".
 */
class TP_QT_EXPORT ChannelProxyInterfaceOTRAdaptor : public Tp::AbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.TelepathyProxy.ChannelProxy.Interface.OTR")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.TelepathyProxy.ChannelProxy.Interface.OTR\">\n"
"    <property access=\"read\" type=\"o\" name=\"WrappedChannel\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Connected\"/>\n"
"    <property access=\"read\" type=\"aaa{sv}\" name=\"PendingMessages\">\n"
"      <annotation value=\"Tp::MessagePartListList\" name=\"com.trolltech.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"u\" name=\"TrustLevel\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"LocalFingerprint\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"RemoteFingerprint\"/>\n"
"    <method name=\"ConnectProxy\"/>\n"
"    <method name=\"DisconnectProxy\"/>\n"
"    <method name=\"SendMessage\">\n"
"      <arg direction=\"in\" type=\"aa{sv}\" name=\"message\">\n"
"        <annotation value=\"Tp::MessagePartList\" name=\"com.trolltech.QtDBus.QtTypeName.In0\"/>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"u\" name=\"flags\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"token\"/>\n"
"    </method>\n"
"    <method name=\"AcknowledgePendingMessages\">\n"
"      <arg direction=\"in\" type=\"au\" name=\"IDs\"/>\n"
"    </method>\n"
"    <method name=\"Initialize\"/>\n"
"    <method name=\"Stop\"/>\n"
"    <method name=\"TrustFingerprint\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"fingerprint\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"trust\"/>\n"
"    </method>\n"
"    <method name=\"StartPeerAuthentication\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"question\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"secret\"/>\n"
"    </method>\n"
"    <method name=\"RespondPeerAuthentication\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"secret\"/>\n"
"    </method>\n"
"    <method name=\"AbortPeerAuthentication\"/>\n"
"    <signal name=\"MessageSent\">\n"
"      <arg type=\"aa{sv}\" name=\"content\">\n"
"        <annotation value=\"Tp::MessagePartList\" name=\"com.trolltech.QtDBus.QtTypeName.In0\"/>\n"
"      </arg>\n"
"      <arg type=\"u\" name=\"flags\"/>\n"
"      <arg type=\"s\" name=\"messageToken\"/>\n"
"    </signal>\n"
"    <signal name=\"MessageReceived\">\n"
"      <arg type=\"aa{sv}\" name=\"message\">\n"
"        <annotation value=\"Tp::MessagePartList\" name=\"com.trolltech.QtDBus.QtTypeName.In0\"/>\n"
"      </arg>\n"
"    </signal>\n"
"    <signal name=\"PendingMessagesRemoved\">\n"
"      <arg type=\"au\" name=\"messageIDs\"/>\n"
"    </signal>\n"
"    <signal name=\"PeerAuthenticationRequested\">\n"
"      <arg type=\"s\" name=\"question\"/>\n"
"    </signal>\n"
"    <signal name=\"PeerAuthenticationConcluded\">\n"
"      <arg type=\"b\" name=\"authenticated\"/>\n"
"    </signal>\n"
"    <signal name=\"PeerAuthenticationInProgress\"/>\n"
"    <signal name=\"PeerAuthenticationAborted\"/>\n"
"    <signal name=\"PeerAuthenticationError\"/>\n"
"    <signal name=\"PeerAuthenticationCheated\"/>\n"
"    <signal name=\"SessionRefreshed\"/>\n"
"    <signal name=\"TrustLevelChanged\">\n"
"      <arg type=\"u\" name=\"trustLevel\"/>\n"
"    </signal>\n"
"  </interface>\n"
"")
    Q_PROPERTY(QDBusObjectPath WrappedChannel READ WrappedChannel )
    Q_PROPERTY(bool Connected READ Connected )
    Q_PROPERTY(Tp::MessagePartListList PendingMessages READ PendingMessages )
    Q_PROPERTY(uint TrustLevel READ TrustLevel )
    Q_PROPERTY(QString LocalFingerprint READ LocalFingerprint )
    Q_PROPERTY(QString RemoteFingerprint READ RemoteFingerprint )

public:
    ChannelProxyInterfaceOTRAdaptor(const QDBusConnection& dbusConnection, QObject* adaptee, QObject* parent);
    virtual ~ChannelProxyInterfaceOTRAdaptor();

    typedef Tp::MethodInvocationContextPtr<  > ConnectProxyContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > DisconnectProxyContextPtr;
    typedef Tp::MethodInvocationContextPtr< QString > SendMessageContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > AcknowledgePendingMessagesContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > InitializeContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > StopContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > TrustFingerprintContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > StartPeerAuthenticationContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > RespondPeerAuthenticationContextPtr;
    typedef Tp::MethodInvocationContextPtr<  > AbortPeerAuthenticationContextPtr;

public: // PROPERTIES
    /**
     * Return the value of the exported D-Bus object property \c WrappedChannel of type \c QDBusObjectPath.
     *
     * Adaptees should export this property as a Qt property named
     * 'wrappedChannel' with type QDBusObjectPath.
     *
     *
     * \htmlonly
     * <p>Object path of the channel this proxy is created for</p>
     * \endhtmlonly
     *
     * \return The value of exported property \c WrappedChannel.
     */
    QDBusObjectPath WrappedChannel() const;
    /**
     * Return the value of the exported D-Bus object property \c Connected of type \c bool.
     *
     * Adaptees should export this property as a Qt property named
     * 'connected' with type bool.
     *
     *
     * \htmlonly
     * <p>%TRUE if the proxy is connected</p>
     * \endhtmlonly
     *
     * \return The value of exported property \c Connected.
     */
    bool Connected() const;
    /**
     * Return the value of the exported D-Bus object property \c PendingMessages of type \c Tp::MessagePartListList.
     *
     * Adaptees should export this property as a Qt property named
     * 'pendingMessages' with type Tp::MessagePartListList.
     *
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelInterfaceMessagesInterface \htmlonly
     * </p>
     * \endhtmlonly
     *
     * \return The value of exported property \c PendingMessages.
     */
    Tp::MessagePartListList PendingMessages() const;
    /**
     * Return the value of the exported D-Bus object property \c TrustLevel of type \c uint.
     *
     * Adaptees should export this property as a Qt property named
     * 'trustLevel' with type uint.
     *
     *
     * \htmlonly
     * <p>The current trust level of this channel:
     *     0=Not_Private, 1=Unverified, 2=Private,
     *     3=Finished</p>
     * <p>Clients MUST listen to TrustLevelChanged to update UI when trust
     * level changes.</p>
     * \endhtmlonly
     *
     * \return The value of exported property \c TrustLevel.
     */
    uint TrustLevel() const;
    /**
     * Return the value of the exported D-Bus object property \c LocalFingerprint of type \c QString.
     *
     * Adaptees should export this property as a Qt property named
     * 'localFingerprint' with type QString.
     *
     *
     * \htmlonly
     * <p>User's current fingerprint - a human readable
     * fingerprint that can be displayed to the user so he can communicate it
     * to the other end by other means so he can trust it.</p>
     * \endhtmlonly
     *
     * \return The value of exported property \c LocalFingerprint.
     */
    QString LocalFingerprint() const;
    /**
     * Return the value of the exported D-Bus object property \c RemoteFingerprint of type \c QString.
     *
     * Adaptees should export this property as a Qt property named
     * 'remoteFingerprint' with type QString.
     *
     *
     * \htmlonly
     * <p>The current fingerprint of the remote contact. Should be displayed
     *   to the user to update its trust level. It is shown in human readable format i.e.
     *   :e '12345678 12345678 12345678 12345678 12345678'.</p>
     * \endhtmlonly
     *
     * \return The value of exported property \c RemoteFingerprint.
     */
    QString RemoteFingerprint() const;

public Q_SLOTS: // METHODS
    /**
     * Begins a call to the exported D-Bus method \c ConnectProxy on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void connectProxy(const Tp::Service::ChannelProxyInterfaceOTRAdaptor::ConnectProxyContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * Connect to the OTR proxy. From now on all data, which is modified by it
     * should be acquired from the proxy, not from the underlying channel.
     *
     */
    void ConnectProxy(const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c DisconnectProxy on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void disconnectProxy(const Tp::Service::ChannelProxyInterfaceOTRAdaptor::DisconnectProxyContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * Turns off the proxy if currenlty connected
     *
     */
    void DisconnectProxy(const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c SendMessage on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void sendMessage(const Tp::MessagePartList& message, uint flags, const Tp::Service::ChannelProxyInterfaceOTRAdaptor::SendMessageContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly org.freedesktop.Telepathy.Channel.Interface.Messages.Sent \htmlonly
     * </p>
     * \endhtmlonly
     *
     * \return
     */
    QString SendMessage(const Tp::MessagePartList& message, uint flags, const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c AcknowledgePendingMessages on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void acknowledgePendingMessages(const Tp::UIntList& IDs, const Tp::Service::ChannelProxyInterfaceOTRAdaptor::AcknowledgePendingMessagesContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * \htmlonly
     * <p>
     *   The same as:
     *    \endhtmlonly ChannelTypeTextInterface \htmlonly
     * </p>
     * \endhtmlonly
     *
     */
    void AcknowledgePendingMessages(const Tp::UIntList& IDs, const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c Initialize on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void initialize(const Tp::Service::ChannelProxyInterfaceOTRAdaptor::InitializeContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * Start an OTR session for this channel if the remote end supports it as
     * well.
     *
     */
    void Initialize(const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c Stop on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void stop(const Tp::Service::ChannelProxyInterfaceOTRAdaptor::StopContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * Stops the OTR session.
     *
     */
    void Stop(const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c TrustFingerprint on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void trustFingerprint(const QString& fingerprint, bool trust, const Tp::Service::ChannelProxyInterfaceOTRAdaptor::TrustFingerprintContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * Set whether or not the user trusts the given fingerprint. It has to be
     * the fingerprint the remote contact is currently using.
     *
     * \param fingerprint
     *
     *     The fingerprint in format: &apos;12345678 12345678 12345678
     *     12345678 12345678&apos;
     * \param trust
     *
     *     %TRUE if trusted, %FALSE otherwise.
     */
    void TrustFingerprint(const QString& fingerprint, bool trust, const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c StartPeerAuthentication on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void startPeerAuthentication(const QString& question, const QString& secret, const Tp::Service::ChannelProxyInterfaceOTRAdaptor::StartPeerAuthenticationContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * \htmlonly
     * <p>This method starts peer authentication using the Socialist
     *   Millionaire protocol.</p>
     * \endhtmlonly
     *
     * \param question
     *
     *     The question to be used for peer authentication. It is used by the
     *     remote peer as a hint for the shared secret. If an empty string is
     *     passed only the shared secret will be used on the peer
     *     authentication process.
     * \param secret
     *
     *     The shared secret to be used for peer authentication. If the
     *     Question parameter is not empty, this should be the answer to it.
     */
    void StartPeerAuthentication(const QString& question, const QString& secret, const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c RespondPeerAuthentication on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void respondPeerAuthentication(const QString& secret, const Tp::Service::ChannelProxyInterfaceOTRAdaptor::RespondPeerAuthenticationContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * \htmlonly
     * <p>This method continues the peer authentication started by the remote
     *   peer.</p>
     * \endhtmlonly
     *
     * \param secret
     *
     *     The shared secret to be used for peer authentication.
     */
    void RespondPeerAuthentication(const QString& secret, const QDBusMessage& dbusMessage);
    /**
     * Begins a call to the exported D-Bus method \c AbortPeerAuthentication on this object.
     *
     * Adaptees should export this method as a Qt slot with the following signature:
     * void abortPeerAuthentication(const Tp::Service::ChannelProxyInterfaceOTRAdaptor::AbortPeerAuthenticationContextPtr &context);
     *
     * Implementations should call MethodInvocationContext::setFinished (or setFinishedWithError
     * accordingly) on the received \a context object once the method has finished processing.
     *
     *
     * \htmlonly
     * <p>This method aborts the peer authentication process.</p>
     * \endhtmlonly
     *
     */
    void AbortPeerAuthentication(const QDBusMessage& dbusMessage);

Q_SIGNALS: // SIGNALS
    /**
     * Represents the exported D-Bus signal \c MessageSent on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void messageSent(const Tp::MessagePartList& content, uint flags, const QString& messageToken);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void MessageSent(const Tp::MessagePartList& content, uint flags, const QString& messageToken);
    /**
     * Represents the exported D-Bus signal \c MessageReceived on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void messageReceived(const Tp::MessagePartList& message);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void MessageReceived(const Tp::MessagePartList& message);
    /**
     * Represents the exported D-Bus signal \c PendingMessagesRemoved on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void pendingMessagesRemoved(const Tp::UIntList& messageIDs);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void PendingMessagesRemoved(const Tp::UIntList& messageIDs);
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationRequested on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationRequested(const QString& question);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     * \param question
     *
     *     The question the remote peer is using for peer authentication. If
     *     an empty string is passed only the shared secret will be used on
     *     the peer authentication process.
     */
    void PeerAuthenticationRequested(const QString& question);
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationConcluded on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationConcluded(bool authenticated);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     * \param authenticated
     *
     *     True if peer identity could be authenticated, false otherwise.
     */
    void PeerAuthenticationConcluded(bool authenticated);
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationInProgress on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationAborted();
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void PeerAuthenticationInProgress();
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationAborted on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationAborted();
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void PeerAuthenticationAborted();
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationError on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationError();
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void PeerAuthenticationError();
    /**
     * Represents the exported D-Bus signal \c PeerAuthenticationCheated on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void peerAuthenticationCheated();
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void PeerAuthenticationCheated();
    /**
     * Represents the exported D-Bus signal \c SessionRefreshed on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void sessionRefreshed();
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void SessionRefreshed();
    /**
     * Represents the exported D-Bus signal \c TrustLevelChanged on this object.
     *
     * Adaptees should export this signal as a Qt signal with the following signature:
     * void trustLevelChanged(uint trustLevel);
     *
     * The adaptee signal will be automatically relayed as a D-Bus signal once emitted.
     *
     */
    void TrustLevelChanged(uint trustLevel);
};

}
}

#endif
