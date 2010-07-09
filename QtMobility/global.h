// Sensors
// QtMobility global header
#include "pyside_global.h"
#include <qmobilityglobal.h>


// SysInfo
#include <qsysteminfo.h>

// Location
#include <QGeoAreaMonitor>
#include <QGeoCoordinate>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QNmeaPositionInfoSource>

// Bearer
#if(QT_VERSION < QT_VERSION_CHECK(4, 7, 0))
#include <QNetworkConfiguration>
#include <QNetworkConfigurationManager>
#include <QNetworkSession>
#endif

// Contacts
// typedef QLatin1String QLatin1Constant;// replace type
#define QTCONTACTSGLOBAL_H // avoid define template
#define Q_DECLARE_LATIN1_CONSTANT(varname, str) static const QString varname
#include <qtcontacts.h>
#include <qcontactchangeset.h>

// MultimediaKit
#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include <QAbstractVideoBuffer>
#include <QAbstractVideoSurface>
#include <QAudioCaptureSource>
#include <QAudioDeviceInfo>
#include <QAudioEncoderControl>
#include <QAudioEncoderSettings>
#include <QAudioEndpointSelector>
#include <QAudioFormat>
#include <QAudioInput>
#include <QAudioOutput>
#include <QAudioSystemPlugin>
#include <QGraphicsVideoItem>
#include <QImageEncoderControl>
#include <QImageEncoderSettings>
#include <QLocalMediaPlaylistProvider>
#include <QMediaBindableInterface>
#include <QMediaContainerControl>
#include <QMediaContent>
#include <QMediaControl>
#include <QMediaImageViewer>
#include <QMediaObject>
#include <QMediaPlayer>
#include <QMediaPlayerControl>
#include <QMediaPlaylist>
#include <QMediaPlaylistControl>
#include <QMediaPlaylistIOPlugin>
#include <QMediaPlaylistNavigator>
#include <QMediaPlaylistProvider>
#include <QMediaPlaylistReader>
#include <QMediaPlaylistSourceControl>
#include <QMediaPlaylistWriter>
#include <QMediaRecorder>
#include <QMediaRecorderControl>
#include <QMediaResource>
#include <QMediaService>
#include <QMediaServiceProvider>
#include <QMediaServiceProviderHint>
#include <QMediaServiceProviderPlugin>
#include <QMediaStreamsControl>
#include <QMediaTimeInterval>
#include <QMediaTimeRange>
#include <QMetaDataReaderControl>
#include <QMetaDataWriterControl>
#include <QRadioTuner>
#include <QRadioTunerControl>
#include <QVideoDeviceControl>
#include <QVideoEncoderControl>
#include <QVideoEncoderSettings>
#include <QVideoFrame>
#include <QVideoRendererControl>
#include <QVideoSurfaceFormat>
#include <QVideoWidget>
#include <QVideoWidgetControl>
#include <QVideoWindowControl>

// Sensors
#include <QAccelerometerReading>
#include <QAccelerometerFilter>
#include <QAccelerometer>
#include <QAmbientLightReading>
#include <QAmbientLightFilter>
#include <QAmbientLightSensor>
#include <QCompassReading>
#include <QCompassFilter>
#include <QCompass>
#include <QMagnetometerReading>
#include <QMagnetometerFilter>
#include <QMagnetometer>
#include <QOrientationReading>
#include <QOrientationFilter>
#include <QOrientationSensor>
#include <QProximityReading>
#include <QProximityFilter>
#include <QProximitySensor>
#include <QRotationReading>
#include <QRotationFilter>
#include <QRotationSensor>
#include <QSensorBackend>
#include <QSensor>
#include <QSensorFilter>
#include <QSensorReading>
#include <QSensorManager>
#include <QSensorBackendFactory>
#include <QSensorPluginInterface>
#include <QTapReading>
#include <QTapFilter>
#include <QTapSensor>

//Versit
#include <QVersitContactExporter>
#include <QVersitContactExporterDetailHandler>
#include <QVersitContactImporter>
#include <QVersitContactImporterPropertyHandler>
#include <QVersitDefaultResourceHandler>
#include <QVersitDocument>
#include <QVersitProperty>
#include <QVersitReader>
#include <QVersitResourceHandler>
#include <QVersitWriter>

// Messaging
#include <QMessage>
#include <QMessageAccount>
#include <QMessageAccountFilter>
#include <QMessageAccountId>
#include <QMessageAccountSortOrder>
#include <QMessageAddress>
#include <QMessageContentContainer>
#include <QMessageContentContainerId>
#include <QMessageFilter>
#include <QMessageFolder>
#include <QMessageFolderFilter>
#include <QMessageFolderId>
#include <QMessageFolderSortOrder>
#include <QMessageId>
#include <QMessageManager>
#include <QMessageService>
#include <QMessageSortOrder>
#include <QMessageStore>

// ServiceFramework
#include <QAbstractSecuritySession>
#include <QServiceContext>
#include <QServiceFilter>
#include <QServiceInterfaceDescriptor>
#include <QServiceManager>
#include <QServicePluginInterface>
#include <qremoteserviceclassregister.h> // where is the include without .h like the others?
#include <qremoteservicecontrol.h>       // where is the include without .h like the others?

// PublishSubscribe
#include <QValueSpacePublisher>
#include <QValueSpaceSubscriber>

