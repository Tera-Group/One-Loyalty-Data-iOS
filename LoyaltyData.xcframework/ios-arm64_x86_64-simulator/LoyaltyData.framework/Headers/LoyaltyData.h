#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class LoyaltyDataOneLoyalty, LoyaltyDataDeviceTimezone, LoyaltyDataConfig, LoyaltyDataPlatform, LoyaltyDataRemoteConfig, LoyaltyDataCertificatePinning, LoyaltyDataLanguage, LoyaltyDataDocumentUrl, LoyaltyDataUpgrading, LoyaltyDataSupportConfigs, LoyaltyDataInAppWebView, LoyaltyDataSignInOption, LoyaltyDataTrackingSDK, LoyaltyDataOutsideApp, LoyaltyDataDataConfigCompanion, LoyaltyDataDataConfig, LoyaltyDataDocumentUrlCompanion, LoyaltyDataInAppWebViewCompanion, LoyaltyDataLanguageCompanion, LoyaltyDataOutsideAppCompanion, LoyaltyDataRemoteConfigCompanion, LoyaltyDataSupportConfigsCompanion, LoyaltyDataSurveyConfigCompanion, LoyaltyDataSurveyConfig, LoyaltyDataUpgradingCompanion, LoyaltyDataDeviceType, LoyaltyDataDeviceCompanion, LoyaltyDataDevice, LoyaltyDataDeviceTimezoneCompanion, LoyaltyDataFactModelType, LoyaltyDataFactType, LoyaltyDataFactCompanion, LoyaltyDataFact, LoyaltyDataMiniAppType, LoyaltyDataMiniAppIdentifier, LoyaltyDataProvider, LoyaltyDataMiniAppCompanion, LoyaltyDataMiniApp, LoyaltyDataMiniAppIdentifierCompanion, LoyaltyDataMiniAppIdentifierAction, LoyaltyDataPagingInfoCompanion, LoyaltyDataPagingInfo, LoyaltyDataProviderType, LoyaltyDataProviderCompanion, LoyaltyDataTheme, LoyaltyDataAppConfigurationCompanion, LoyaltyDataAppConfiguration, LoyaltyDataKotlinEnumCompanion, LoyaltyDataKotlinEnum<E>, LoyaltyDataSignInOptionCompanion, LoyaltyDataKotlinArray<T>, LoyaltyDataSignInOptionSerializer, LoyaltyDataThemeCompanion, LoyaltyDataTrackingSDKCompanion, LoyaltyDataTrackingSDKSerializer, LoyaltyDataDeviceTypeCompanion, LoyaltyDataDeviceTypeSerializer, LoyaltyDataFactModelTypeCompanion, LoyaltyDataFactModelTypeSerializer, LoyaltyDataFactTypeCompanion, LoyaltyDataFactTypeSerializer, LoyaltyDataGenderCompanion, LoyaltyDataGender, LoyaltyDataGenderSerializer, LoyaltyDataMiniAppIdentifierActionCompanion, LoyaltyDataMiniAppTypeCompanion, LoyaltyDataMiniAppTypeSerializer, LoyaltyDataProviderTypeCompanion, LoyaltyDataProviderTypeSerializer, LoyaltyDataStoreTypeCompanion, LoyaltyDataStoreType, LoyaltyDataStoreTypeSerializer, LoyaltyDataInAppProductBenefitType, LoyaltyDataProductDurationUnit, LoyaltyDataInAppProductBenefitCompanion, LoyaltyDataInAppProductBenefit, LoyaltyDataUserInAppProductBenefitCompanion, LoyaltyDataUserInAppProductBenefit, LoyaltyDataInAppProductBenefitTypeCompanion, LoyaltyDataInAppProductBenefitTypeSerializer, LoyaltyDataProductDurationUnitCompanion, LoyaltyDataProductDurationUnitSerializer, LoyaltyDataBurnTransactionRequestCompanion, LoyaltyDataBurnTransactionRequest, LoyaltyDataCheckInClaimRuleCompanion, LoyaltyDataCheckInClaimRule, LoyaltyDataClaimRequestCompanion, LoyaltyDataClaimRequest, LoyaltyDataLoyaltyConfigurationCompanion, LoyaltyDataLoyaltyConfiguration, LoyaltyDataLoyaltyAction, LoyaltyDataLoyaltySource, LoyaltyDataLoyaltyHistoryCompanion, LoyaltyDataLoyaltyHistory, LoyaltyDataMission, LoyaltyDataPrize, LoyaltyDataMissionCategory, LoyaltyDataMissionType, LoyaltyDataUserMission, LoyaltyDataMissionCompanion, LoyaltyDataPrizeCompanion, LoyaltyDataUserProfile, LoyaltyDataReferralHistoryCompanion, LoyaltyDataReferralHistory, LoyaltyDataUpdateUserMissionProgressRequestCompanion, LoyaltyDataUpdateUserMissionProgressRequest, LoyaltyDataUserLoyaltyCompanion, LoyaltyDataUserLoyalty, LoyaltyDataMissionStatus, LoyaltyDataUserMissionCompanion, LoyaltyDataLoyaltyActionCompanion, LoyaltyDataLoyaltyActionSerializer, LoyaltyDataLoyaltyConfigurationKeyCompanion, LoyaltyDataLoyaltyConfigurationKey, LoyaltyDataLoyaltyConfigurationKeySerializer, LoyaltyDataLoyaltySourceCompanion, LoyaltyDataLoyaltySourceSerializer, LoyaltyDataMissionCategoryCompanion, LoyaltyDataMissionCategorySerializer, LoyaltyDataMissionStatusCompanion, LoyaltyDataMissionStatusSerializer, LoyaltyDataMissionTypeCompanion, LoyaltyDataMissionTypeSerializer, LoyaltyDataUserProfileCompanion, LoyaltyDataKotlinThrowable, LoyaltyDataKotlinError, LoyaltyDataONErrorCode, LoyaltyDataONError, LoyaltyDataOnHttpError, LoyaltyDataApiResponseCompanion, LoyaltyDataApiResponse<T>, LoyaltyDataErrorResponseCompanion, LoyaltyDataErrorResponse, LoyaltyDataPaginationResponseCompanion, LoyaltyDataPaginationResponse<T>, LoyaltyDataPagingResponseCompanion, LoyaltyDataPagingResponse<T>, LoyaltyDataJsonProvider, LoyaltyDataKotlinx_serialization_jsonJson, LoyaltyDataOnAppDataStorageAccessible, LoyaltyDataKtor_client_coreHttpClientConfig<T>, LoyaltyDataKtor_client_coreHttpClient, LoyaltyDataKotlinx_serialization_jsonJsonElement, LoyaltyDataKotlinException, LoyaltyDataKotlinRuntimeException, LoyaltyDataKotlinIllegalStateException, LoyaltyDataKotlinx_serialization_coreSerializersModule, LoyaltyDataKotlinx_serialization_coreSerialKind, LoyaltyDataKotlinNothing, LoyaltyDataKotlinx_serialization_jsonJsonDefault, LoyaltyDataKotlinx_serialization_jsonJsonConfiguration, LoyaltyDataKtor_client_coreHttpClientEngineConfig, LoyaltyDataKtor_eventsEvents, LoyaltyDataKtor_client_coreHttpReceivePipeline, LoyaltyDataKtor_client_coreHttpRequestPipeline, LoyaltyDataKtor_client_coreHttpResponsePipeline, LoyaltyDataKtor_client_coreHttpSendPipeline, LoyaltyDataKtor_utilsAttributeKey<T>, LoyaltyDataKotlinx_serialization_jsonJsonElementCompanion, LoyaltyDataKtor_client_coreHttpRequestData, LoyaltyDataKtor_client_coreHttpResponseData, LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher, LoyaltyDataKtor_client_coreProxyConfig, LoyaltyDataKtor_eventsEventDefinition<T>, LoyaltyDataKtor_utilsPipelinePhase, LoyaltyDataKtor_utilsPipeline<TSubject, TContext>, LoyaltyDataKtor_client_coreHttpReceivePipelinePhases, LoyaltyDataKtor_client_coreHttpResponse, LoyaltyDataKotlinUnit, LoyaltyDataKtor_client_coreHttpRequestPipelinePhases, LoyaltyDataKtor_client_coreHttpRequestBuilder, LoyaltyDataKtor_client_coreHttpResponsePipelinePhases, LoyaltyDataKtor_client_coreHttpResponseContainer, LoyaltyDataKtor_client_coreHttpClientCall, LoyaltyDataKtor_client_coreHttpSendPipelinePhases, LoyaltyDataKtor_httpUrl, LoyaltyDataKtor_httpHttpMethod, LoyaltyDataKtor_httpOutgoingContent, LoyaltyDataKtor_httpHttpStatusCode, LoyaltyDataKtor_utilsGMTDate, LoyaltyDataKtor_httpHttpProtocolVersion, LoyaltyDataKotlinAbstractCoroutineContextElement, LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcherKey, LoyaltyDataKtor_httpHeadersBuilder, LoyaltyDataKtor_client_coreHttpRequestBuilderCompanion, LoyaltyDataKtor_httpURLBuilder, LoyaltyDataKtor_utilsTypeInfo, LoyaltyDataKtor_client_coreHttpClientCallCompanion, LoyaltyDataKtor_httpUrlCompanion, LoyaltyDataKtor_httpURLProtocol, LoyaltyDataKtor_httpHttpMethodCompanion, LoyaltyDataKtor_httpContentType, LoyaltyDataKotlinCancellationException, LoyaltyDataKtor_httpHttpStatusCodeCompanion, LoyaltyDataKtor_utilsGMTDateCompanion, LoyaltyDataKtor_utilsWeekDay, LoyaltyDataKtor_utilsMonth, LoyaltyDataKtor_httpHttpProtocolVersionCompanion, LoyaltyDataKotlinAbstractCoroutineContextKey<B, E>, LoyaltyDataKtor_ioMemory, LoyaltyDataKtor_ioChunkBuffer, LoyaltyDataKtor_ioBuffer, LoyaltyDataKotlinByteArray, LoyaltyDataKtor_ioByteReadPacket, LoyaltyDataKtor_utilsStringValuesBuilderImpl, LoyaltyDataKtor_httpURLBuilderCompanion, LoyaltyDataKtor_httpURLProtocolCompanion, LoyaltyDataKtor_httpHeaderValueParam, LoyaltyDataKtor_httpHeaderValueWithParametersCompanion, LoyaltyDataKtor_httpHeaderValueWithParameters, LoyaltyDataKtor_httpContentTypeCompanion, LoyaltyDataKtor_utilsWeekDayCompanion, LoyaltyDataKtor_utilsMonthCompanion, LoyaltyDataKtor_ioMemoryCompanion, LoyaltyDataKtor_ioBufferCompanion, LoyaltyDataKtor_ioChunkBufferCompanion, LoyaltyDataKotlinByteIterator, LoyaltyDataKtor_ioInputCompanion, LoyaltyDataKtor_ioInput, LoyaltyDataKtor_ioByteReadPacketCompanion, LoyaltyDataKotlinKTypeProjection, LoyaltyDataKotlinKVariance, LoyaltyDataKotlinKTypeProjectionCompanion;

@protocol LoyaltyDataAuthenticatorListener, LoyaltyDataLoyaltyService, LoyaltyDataOnRequestServiceErrorListener, LoyaltyDataRemoteConfigService, LoyaltyDataKotlinx_serialization_coreKSerializer, LoyaltyDataJsonEncode, LoyaltyDataFactDetail, LoyaltyDataKotlinComparable, LoyaltyDataKotlinx_serialization_coreEncoder, LoyaltyDataKotlinx_serialization_coreSerialDescriptor, LoyaltyDataKotlinx_serialization_coreSerializationStrategy, LoyaltyDataKotlinx_serialization_coreDecoder, LoyaltyDataKotlinx_serialization_coreDeserializationStrategy, LoyaltyDataOnAppDataStorageInterface, LoyaltyDataKtor_client_coreHttpClientPlugin, LoyaltyDataKtor_client_coreHttpClientEngineFactory, LoyaltyDataKtor_httpParametersBuilder, LoyaltyDataKotlinIterator, LoyaltyDataKotlinx_serialization_coreCompositeEncoder, LoyaltyDataKotlinAnnotation, LoyaltyDataKotlinx_serialization_coreCompositeDecoder, LoyaltyDataKotlinx_serialization_coreSerialFormat, LoyaltyDataKotlinx_serialization_coreStringFormat, LoyaltyDataKotlinCoroutineContext, LoyaltyDataKotlinx_coroutines_coreCoroutineScope, LoyaltyDataKtor_ioCloseable, LoyaltyDataKtor_client_coreHttpClientEngine, LoyaltyDataKtor_client_coreHttpClientEngineCapability, LoyaltyDataKtor_utilsAttributes, LoyaltyDataKtor_utilsStringValues, LoyaltyDataKotlinMapEntry, LoyaltyDataKtor_utilsStringValuesBuilder, LoyaltyDataKotlinx_serialization_coreSerializersModuleCollector, LoyaltyDataKotlinKClass, LoyaltyDataKotlinCoroutineContextElement, LoyaltyDataKotlinCoroutineContextKey, LoyaltyDataKotlinx_coroutines_coreDisposableHandle, LoyaltyDataKotlinSuspendFunction2, LoyaltyDataKotlinKDeclarationContainer, LoyaltyDataKotlinKAnnotatedElement, LoyaltyDataKotlinKClassifier, LoyaltyDataKtor_httpHeaders, LoyaltyDataKotlinx_coroutines_coreJob, LoyaltyDataKotlinContinuation, LoyaltyDataKotlinContinuationInterceptor, LoyaltyDataKotlinx_coroutines_coreRunnable, LoyaltyDataKotlinFunction, LoyaltyDataKtor_httpHttpMessage, LoyaltyDataKtor_ioByteReadChannel, LoyaltyDataKtor_httpHttpMessageBuilder, LoyaltyDataKtor_client_coreHttpRequest, LoyaltyDataKtor_httpParameters, LoyaltyDataKotlinx_coroutines_coreChildHandle, LoyaltyDataKotlinx_coroutines_coreChildJob, LoyaltyDataKotlinSequence, LoyaltyDataKotlinx_coroutines_coreSelectClause0, LoyaltyDataKtor_ioReadSession, LoyaltyDataKotlinSuspendFunction1, LoyaltyDataKotlinAppendable, LoyaltyDataKotlinKType, LoyaltyDataKotlinx_coroutines_coreParentJob, LoyaltyDataKotlinx_coroutines_coreSelectInstance, LoyaltyDataKotlinx_coroutines_coreSelectClause, LoyaltyDataKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface LoyaltyDataBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface LoyaltyDataBase (LoyaltyDataBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface LoyaltyDataMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LoyaltyDataMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorLoyaltyDataKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface LoyaltyDataNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface LoyaltyDataByte : LoyaltyDataNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface LoyaltyDataUByte : LoyaltyDataNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface LoyaltyDataShort : LoyaltyDataNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface LoyaltyDataUShort : LoyaltyDataNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface LoyaltyDataInt : LoyaltyDataNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface LoyaltyDataUInt : LoyaltyDataNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface LoyaltyDataLong : LoyaltyDataNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface LoyaltyDataULong : LoyaltyDataNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface LoyaltyDataFloat : LoyaltyDataNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface LoyaltyDataDouble : LoyaltyDataNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface LoyaltyDataBoolean : LoyaltyDataNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneLoyalty")))
@interface LoyaltyDataOneLoyalty : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oneLoyalty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataOneLoyalty *shared __attribute__((swift_name("shared")));
- (void)cacheDeviceLanguageCode:(NSString *)code __attribute__((swift_name("cacheDeviceLanguage(code:)")));
- (void)cacheDeviceTimezoneTimezone:(LoyaltyDataDeviceTimezone *)timezone __attribute__((swift_name("cacheDeviceTimezone(timezone:)")));
- (void)clearLocalStorage __attribute__((swift_name("clearLocalStorage()")));
- (void)clearToken __attribute__((swift_name("clearToken()")));
- (NSString * _Nullable)getDeviceLanguage __attribute__((swift_name("getDeviceLanguage()")));
- (void)registerAuthenticatorListenerAuthenticatorListener:(id<LoyaltyDataAuthenticatorListener>)authenticatorListener __attribute__((swift_name("registerAuthenticatorListener(authenticatorListener:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setupConfig:(LoyaltyDataConfig *)config keychainServiceName:(NSString *)keychainServiceName keychainAccessGroup:(NSString * _Nullable)keychainAccessGroup platform:(LoyaltyDataPlatform *)platform completionHandler:(void (^)(LoyaltyDataRemoteConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("setup(config:keychainServiceName:keychainAccessGroup:platform:completionHandler:)")));
@property (readonly) id<LoyaltyDataAuthenticatorListener> _Nullable authenticatorListener __attribute__((swift_name("authenticatorListener")));
@property (readonly) NSArray<LoyaltyDataCertificatePinning *> *certificatePinning __attribute__((swift_name("certificatePinning")));
@property (readonly) LoyaltyDataRemoteConfig *config __attribute__((swift_name("config")));
@property (readonly) BOOL isNetworkAvailable __attribute__((swift_name("isNetworkAvailable")));
@property (readonly) NSString * _Nullable keychainAccessGroup __attribute__((swift_name("keychainAccessGroup")));
@property (readonly) NSString * _Nullable keychainServiceName __attribute__((swift_name("keychainServiceName")));
@property (readonly) id<LoyaltyDataLoyaltyService> loyaltyService __attribute__((swift_name("loyaltyService")));
@property (readonly) id<LoyaltyDataOnRequestServiceErrorListener> _Nullable onRequestServiceErrorListener __attribute__((swift_name("onRequestServiceErrorListener")));
@property (readonly) LoyaltyDataPlatform *platform __attribute__((swift_name("platform")));
@property (readonly) id<LoyaltyDataRemoteConfigService> remoteConfigService __attribute__((swift_name("remoteConfigService")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CertificatePinning")))
@interface LoyaltyDataCertificatePinning : LoyaltyDataBase
- (instancetype)initWithPattern:(NSString *)pattern pins:(NSArray<NSString *> *)pins __attribute__((swift_name("init(pattern:pins:)"))) __attribute__((objc_designated_initializer));
- (LoyaltyDataCertificatePinning *)doCopyPattern:(NSString *)pattern pins:(NSArray<NSString *> *)pins __attribute__((swift_name("doCopy(pattern:pins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@property (readonly) NSArray<NSString *> *pins __attribute__((swift_name("pins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface LoyaltyDataConfig : LoyaltyDataBase
- (instancetype)initWithApiToken:(NSString *)apiToken apiKey:(NSString *)apiKey clientId:(NSString *)clientId defaultConfig:(LoyaltyDataRemoteConfig * _Nullable)defaultConfig requestTimeout:(int64_t)requestTimeout certificatePinning:(NSArray<LoyaltyDataCertificatePinning *> *)certificatePinning __attribute__((swift_name("init(apiToken:apiKey:clientId:defaultConfig:requestTimeout:certificatePinning:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *apiToken __attribute__((swift_name("apiToken")));
@property (readonly) NSArray<LoyaltyDataCertificatePinning *> *certificatePinning __attribute__((swift_name("certificatePinning")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) LoyaltyDataRemoteConfig * _Nullable defaultConfig __attribute__((swift_name("defaultConfig")));
@property (readonly) int64_t requestTimeout __attribute__((swift_name("requestTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataConfig")))
@interface LoyaltyDataDataConfig : LoyaltyDataBase
- (instancetype)initWithLanguages:(LoyaltyDataLanguage * _Nullable)languages termConditions:(LoyaltyDataDocumentUrl * _Nullable)termConditions privacyPolicy:(LoyaltyDataDocumentUrl * _Nullable)privacyPolicy ecommerceTermCondition:(LoyaltyDataDocumentUrl * _Nullable)ecommerceTermCondition ecommercePaymentPolicy:(LoyaltyDataDocumentUrl * _Nullable)ecommercePaymentPolicy ecommerceReturnPolicy:(LoyaltyDataDocumentUrl * _Nullable)ecommerceReturnPolicy supportUrl:(NSString *)supportUrl upgrading:(LoyaltyDataUpgrading * _Nullable)upgrading listPrefixPhoneNumberOfSaymee:(NSArray<NSString *> *)listPrefixPhoneNumberOfSaymee votingRuleContentId:(NSString * _Nullable)votingRuleContentId protectContentIds:(NSArray<NSString *> *)protectContentIds supportConfigs:(LoyaltyDataSupportConfigs * _Nullable)supportConfigs inAppWebView:(NSArray<LoyaltyDataInAppWebView *> *)inAppWebView isEnabledInteraction:(BOOL)isEnabledInteraction isEnabledShopping:(BOOL)isEnabledShopping isPlayerShowChannelLogo:(BOOL)isPlayerShowChannelLogo isShowVotePercentage:(BOOL)isShowVotePercentage shoppingLandingPageId:(NSString * _Nullable)shoppingLandingPageId inStreamAdUnit:(NSString * _Nullable)inStreamAdUnit signInOptions:(NSArray<LoyaltyDataSignInOption *> *)signInOptions supportedTrackingSDKs:(NSArray<LoyaltyDataTrackingSDK *> *)supportedTrackingSDKs menuCachedTime:(int32_t)menuCachedTime reelSeriesApp:(LoyaltyDataOutsideApp * _Nullable)reelSeriesApp __attribute__((swift_name("init(languages:termConditions:privacyPolicy:ecommerceTermCondition:ecommercePaymentPolicy:ecommerceReturnPolicy:supportUrl:upgrading:listPrefixPhoneNumberOfSaymee:votingRuleContentId:protectContentIds:supportConfigs:inAppWebView:isEnabledInteraction:isEnabledShopping:isPlayerShowChannelLogo:isShowVotePercentage:shoppingLandingPageId:inStreamAdUnit:signInOptions:supportedTrackingSDKs:menuCachedTime:reelSeriesApp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataDataConfigCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataDataConfig *)doCopyLanguages:(LoyaltyDataLanguage * _Nullable)languages termConditions:(LoyaltyDataDocumentUrl * _Nullable)termConditions privacyPolicy:(LoyaltyDataDocumentUrl * _Nullable)privacyPolicy ecommerceTermCondition:(LoyaltyDataDocumentUrl * _Nullable)ecommerceTermCondition ecommercePaymentPolicy:(LoyaltyDataDocumentUrl * _Nullable)ecommercePaymentPolicy ecommerceReturnPolicy:(LoyaltyDataDocumentUrl * _Nullable)ecommerceReturnPolicy supportUrl:(NSString *)supportUrl upgrading:(LoyaltyDataUpgrading * _Nullable)upgrading listPrefixPhoneNumberOfSaymee:(NSArray<NSString *> *)listPrefixPhoneNumberOfSaymee votingRuleContentId:(NSString * _Nullable)votingRuleContentId protectContentIds:(NSArray<NSString *> *)protectContentIds supportConfigs:(LoyaltyDataSupportConfigs * _Nullable)supportConfigs inAppWebView:(NSArray<LoyaltyDataInAppWebView *> *)inAppWebView isEnabledInteraction:(BOOL)isEnabledInteraction isEnabledShopping:(BOOL)isEnabledShopping isPlayerShowChannelLogo:(BOOL)isPlayerShowChannelLogo isShowVotePercentage:(BOOL)isShowVotePercentage shoppingLandingPageId:(NSString * _Nullable)shoppingLandingPageId inStreamAdUnit:(NSString * _Nullable)inStreamAdUnit signInOptions:(NSArray<LoyaltyDataSignInOption *> *)signInOptions supportedTrackingSDKs:(NSArray<LoyaltyDataTrackingSDK *> *)supportedTrackingSDKs menuCachedTime:(int32_t)menuCachedTime reelSeriesApp:(LoyaltyDataOutsideApp * _Nullable)reelSeriesApp __attribute__((swift_name("doCopy(languages:termConditions:privacyPolicy:ecommerceTermCondition:ecommercePaymentPolicy:ecommerceReturnPolicy:supportUrl:upgrading:listPrefixPhoneNumberOfSaymee:votingRuleContentId:protectContentIds:supportConfigs:inAppWebView:isEnabledInteraction:isEnabledShopping:isPlayerShowChannelLogo:isShowVotePercentage:shoppingLandingPageId:inStreamAdUnit:signInOptions:supportedTrackingSDKs:menuCachedTime:reelSeriesApp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataDocumentUrl * _Nullable ecommercePaymentPolicy __attribute__((swift_name("ecommercePaymentPolicy")));
@property (readonly) LoyaltyDataDocumentUrl * _Nullable ecommerceReturnPolicy __attribute__((swift_name("ecommerceReturnPolicy")));
@property (readonly) LoyaltyDataDocumentUrl * _Nullable ecommerceTermCondition __attribute__((swift_name("ecommerceTermCondition")));
@property (readonly) NSArray<LoyaltyDataInAppWebView *> *inAppWebView __attribute__((swift_name("inAppWebView")));
@property (readonly) NSString * _Nullable inStreamAdUnit __attribute__((swift_name("inStreamAdUnit")));
@property (readonly) BOOL isEnabledInteraction __attribute__((swift_name("isEnabledInteraction")));
@property (readonly) BOOL isEnabledShopping __attribute__((swift_name("isEnabledShopping")));
@property (readonly) BOOL isPlayerShowChannelLogo __attribute__((swift_name("isPlayerShowChannelLogo")));
@property (readonly) BOOL isShowVotePercentage __attribute__((swift_name("isShowVotePercentage")));
@property (readonly) LoyaltyDataLanguage * _Nullable languages __attribute__((swift_name("languages")));
@property (readonly) NSArray<NSString *> *listPrefixPhoneNumberOfSaymee __attribute__((swift_name("listPrefixPhoneNumberOfSaymee")));
@property (readonly) int32_t menuCachedTime __attribute__((swift_name("menuCachedTime")));
@property (readonly) LoyaltyDataDocumentUrl * _Nullable privacyPolicy __attribute__((swift_name("privacyPolicy")));
@property (readonly) NSArray<NSString *> *protectContentIds __attribute__((swift_name("protectContentIds")));
@property (readonly) LoyaltyDataOutsideApp * _Nullable reelSeriesApp __attribute__((swift_name("reelSeriesApp")));
@property (readonly) NSString * _Nullable shoppingLandingPageId __attribute__((swift_name("shoppingLandingPageId")));
@property (readonly) NSArray<LoyaltyDataSignInOption *> *signInOptions __attribute__((swift_name("signInOptions")));
@property (readonly) LoyaltyDataSupportConfigs * _Nullable supportConfigs __attribute__((swift_name("supportConfigs")));
@property (readonly) NSString *supportUrl __attribute__((swift_name("supportUrl")));
@property (readonly) NSArray<LoyaltyDataTrackingSDK *> *supportedTrackingSDKs __attribute__((swift_name("supportedTrackingSDKs")));
@property (readonly) LoyaltyDataDocumentUrl * _Nullable termConditions __attribute__((swift_name("termConditions")));
@property (readonly) LoyaltyDataUpgrading * _Nullable upgrading __attribute__((swift_name("upgrading")));
@property (readonly) NSString * _Nullable votingRuleContentId __attribute__((swift_name("votingRuleContentId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataConfig.Companion")))
@interface LoyaltyDataDataConfigCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDataConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentUrl")))
@interface LoyaltyDataDocumentUrl : LoyaltyDataBase
- (instancetype)initWithUrl:(NSString *)url versions:(NSArray<NSString *> *)versions languages:(NSArray<NSString *> *)languages __attribute__((swift_name("init(url:versions:languages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataDocumentUrlCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataDocumentUrl *)doCopyUrl:(NSString *)url versions:(NSArray<NSString *> *)versions languages:(NSArray<NSString *> *)languages __attribute__((swift_name("doCopy(url:versions:languages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getDocumentUrlWithVersion:(NSString * _Nullable)version languageCode:(NSString * _Nullable)languageCode __attribute__((swift_name("getDocumentUrlWith(version:languageCode:)")));
- (NSString * _Nullable)getLatestVersion __attribute__((swift_name("getLatestVersion()")));
- (NSString *)getLatestVersionUrlLanguageCode:(NSString * _Nullable)languageCode __attribute__((swift_name("getLatestVersionUrl(languageCode:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *languages __attribute__((swift_name("languages")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) NSArray<NSString *> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentUrl.Companion")))
@interface LoyaltyDataDocumentUrlCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDocumentUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppWebView")))
@interface LoyaltyDataInAppWebView : LoyaltyDataBase
- (instancetype)initWithWebViewUrl:(NSString *)webViewUrl redirectUrls:(NSDictionary<NSString *, NSString *> *)redirectUrls __attribute__((swift_name("init(webViewUrl:redirectUrls:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataInAppWebViewCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataInAppWebView *)doCopyWebViewUrl:(NSString *)webViewUrl redirectUrls:(NSDictionary<NSString *, NSString *> *)redirectUrls __attribute__((swift_name("doCopy(webViewUrl:redirectUrls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *redirectUrls __attribute__((swift_name("redirectUrls")));
@property (readonly) NSArray<NSString *> *urlForHandling __attribute__((swift_name("urlForHandling")));
@property (readonly) NSString *webViewUrl __attribute__((swift_name("webViewUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppWebView.Companion")))
@interface LoyaltyDataInAppWebViewCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataInAppWebViewCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface LoyaltyDataLanguage : LoyaltyDataBase
- (instancetype)initWithSupported:(NSArray<NSString *> *)supported __attribute__((swift_name("init(supported:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataLanguageCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataLanguage *)doCopySupported:(NSArray<NSString *> *)supported __attribute__((swift_name("doCopy(supported:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *supported __attribute__((swift_name("supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.Companion")))
@interface LoyaltyDataLanguageCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLanguageCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutsideApp")))
@interface LoyaltyDataOutsideApp : LoyaltyDataBase
- (instancetype)initWithIOSUrl:(NSString * _Nullable)iOSUrl androidUrl:(NSString * _Nullable)androidUrl iOSAlternativeUrl:(NSString * _Nullable)iOSAlternativeUrl androidAlternativeUrl:(NSString * _Nullable)androidAlternativeUrl __attribute__((swift_name("init(iOSUrl:androidUrl:iOSAlternativeUrl:androidAlternativeUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataOutsideAppCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataOutsideApp *)doCopyIOSUrl:(NSString * _Nullable)iOSUrl androidUrl:(NSString * _Nullable)androidUrl iOSAlternativeUrl:(NSString * _Nullable)iOSAlternativeUrl androidAlternativeUrl:(NSString * _Nullable)androidAlternativeUrl __attribute__((swift_name("doCopy(iOSUrl:androidUrl:iOSAlternativeUrl:androidAlternativeUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable androidAlternativeUrl __attribute__((swift_name("androidAlternativeUrl")));
@property (readonly) NSString * _Nullable androidUrl __attribute__((swift_name("androidUrl")));
@property (readonly) NSString * _Nullable iOSAlternativeUrl __attribute__((swift_name("iOSAlternativeUrl")));
@property (readonly) NSString * _Nullable iOSUrl __attribute__((swift_name("iOSUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutsideApp.Companion")))
@interface LoyaltyDataOutsideAppCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataOutsideAppCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteConfig")))
@interface LoyaltyDataRemoteConfig : LoyaltyDataBase
- (instancetype)initWithTracking:(NSString *)tracking data:(LoyaltyDataDataConfig * _Nullable)data purchaseService:(NSString *)purchaseService loyalty:(NSString *)loyalty requestTimeout:(int64_t)requestTimeout clientId:(NSString *)clientId __attribute__((swift_name("init(tracking:data:purchaseService:loyalty:requestTimeout:clientId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataRemoteConfigCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataRemoteConfig *)doCopyTracking:(NSString *)tracking data:(LoyaltyDataDataConfig * _Nullable)data purchaseService:(NSString *)purchaseService loyalty:(NSString *)loyalty requestTimeout:(int64_t)requestTimeout clientId:(NSString *)clientId __attribute__((swift_name("doCopy(tracking:data:purchaseService:loyalty:requestTimeout:clientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) LoyaltyDataDataConfig * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *loyalty __attribute__((swift_name("loyalty")));
@property (readonly) NSString *purchaseService __attribute__((swift_name("purchaseService")));
@property (readonly) int64_t requestTimeout __attribute__((swift_name("requestTimeout")));
@property (readonly) NSString *tracking __attribute__((swift_name("tracking")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteConfig.Companion")))
@interface LoyaltyDataRemoteConfigCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataRemoteConfigCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataRemoteConfig *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupportConfigs")))
@interface LoyaltyDataSupportConfigs : LoyaltyDataBase
- (instancetype)initWithEmail:(NSString *)email phone:(NSString *)phone zalo:(NSString *)zalo __attribute__((swift_name("init(email:phone:zalo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataSupportConfigsCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataSupportConfigs *)doCopyEmail:(NSString *)email phone:(NSString *)phone zalo:(NSString *)zalo __attribute__((swift_name("doCopy(email:phone:zalo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) NSString *zalo __attribute__((swift_name("zalo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupportConfigs.Companion")))
@interface LoyaltyDataSupportConfigsCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataSupportConfigsCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyConfig")))
@interface LoyaltyDataSurveyConfig : LoyaltyDataBase
- (instancetype)initWithEnable:(BOOL)enable __attribute__((swift_name("init(enable:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataSurveyConfigCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataSurveyConfig *)doCopyEnable:(BOOL)enable __attribute__((swift_name("doCopy(enable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enable __attribute__((swift_name("enable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyConfig.Companion")))
@interface LoyaltyDataSurveyConfigCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataSurveyConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Upgrading")))
@interface LoyaltyDataUpgrading : LoyaltyDataBase
- (instancetype)initWithForceUpgrade:(LoyaltyDataBoolean * _Nullable)forceUpgrade minimumAndroidAppVersion:(NSString * _Nullable)minimumAndroidAppVersion minimumIOSAppVersion:(NSString * _Nullable)minimumIOSAppVersion latestIOSVersion:(NSString * _Nullable)latestIOSVersion latestAndroidVersion:(NSString * _Nullable)latestAndroidVersion iOSUpgradeUrl:(NSString * _Nullable)iOSUpgradeUrl androidUpgradeUrl:(NSString * _Nullable)androidUpgradeUrl __attribute__((swift_name("init(forceUpgrade:minimumAndroidAppVersion:minimumIOSAppVersion:latestIOSVersion:latestAndroidVersion:iOSUpgradeUrl:androidUpgradeUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUpgradingCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUpgrading *)doCopyForceUpgrade:(LoyaltyDataBoolean * _Nullable)forceUpgrade minimumAndroidAppVersion:(NSString * _Nullable)minimumAndroidAppVersion minimumIOSAppVersion:(NSString * _Nullable)minimumIOSAppVersion latestIOSVersion:(NSString * _Nullable)latestIOSVersion latestAndroidVersion:(NSString * _Nullable)latestAndroidVersion iOSUpgradeUrl:(NSString * _Nullable)iOSUpgradeUrl androidUpgradeUrl:(NSString * _Nullable)androidUpgradeUrl __attribute__((swift_name("doCopy(forceUpgrade:minimumAndroidAppVersion:minimumIOSAppVersion:latestIOSVersion:latestAndroidVersion:iOSUpgradeUrl:androidUpgradeUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isAndroidAppVersionGreaterCurrentAppVersion:(NSString *)currentAppVersion __attribute__((swift_name("isAndroidAppVersionGreater(currentAppVersion:)")));
- (BOOL)isIOSAppVersionGreaterCurrentAppVersion:(NSString *)currentAppVersion __attribute__((swift_name("isIOSAppVersionGreater(currentAppVersion:)")));
- (BOOL)isMinimumAppVersionGreaterCurrentAppVersion:(NSString *)currentAppVersion __attribute__((swift_name("isMinimumAppVersionGreater(currentAppVersion:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable androidUpgradeUrl __attribute__((swift_name("androidUpgradeUrl")));
@property (readonly) LoyaltyDataBoolean * _Nullable forceUpgrade __attribute__((swift_name("forceUpgrade")));
@property (readonly) NSString * _Nullable iOSUpgradeUrl __attribute__((swift_name("iOSUpgradeUrl")));
@property (readonly) NSString * _Nullable latestAndroidVersion __attribute__((swift_name("latestAndroidVersion")));
@property (readonly) NSString * _Nullable latestIOSVersion __attribute__((swift_name("latestIOSVersion")));
@property (readonly) NSString * _Nullable minimumAndroidAppVersion __attribute__((swift_name("minimumAndroidAppVersion")));
@property (readonly) NSString * _Nullable minimumIOSAppVersion __attribute__((swift_name("minimumIOSAppVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Upgrading.Companion")))
@interface LoyaltyDataUpgradingCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUpgradingCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("JsonEncode")))
@protocol LoyaltyDataJsonEncode
@required
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface LoyaltyDataDevice : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id vid:(NSString * _Nullable)vid name:(NSString * _Nullable)name model:(NSString * _Nullable)model resolution:(NSString * _Nullable)resolution timezone:(NSString * _Nullable)timezone language:(NSString * _Nullable)language token:(NSString * _Nullable)token status:(LoyaltyDataBoolean * _Nullable)status os:(NSString * _Nullable)os osVersion:(NSString * _Nullable)osVersion type:(LoyaltyDataDeviceType * _Nullable)type acceptedTermsAndConditionsVersion:(NSString * _Nullable)acceptedTermsAndConditionsVersion acceptedTermsAndConditionsAt:(LoyaltyDataLong * _Nullable)acceptedTermsAndConditionsAt createdBy:(NSString * _Nullable)createdBy updatedBy:(NSString * _Nullable)updatedBy createdAt:(LoyaltyDataLong * _Nullable)createdAt updatedAt:(LoyaltyDataLong * _Nullable)updatedAt __attribute__((swift_name("init(id:vid:name:model:resolution:timezone:language:token:status:os:osVersion:type:acceptedTermsAndConditionsVersion:acceptedTermsAndConditionsAt:createdBy:updatedBy:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataDeviceCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataDevice *)doCopyId:(NSString *)id vid:(NSString * _Nullable)vid name:(NSString * _Nullable)name model:(NSString * _Nullable)model resolution:(NSString * _Nullable)resolution timezone:(NSString * _Nullable)timezone language:(NSString * _Nullable)language token:(NSString * _Nullable)token status:(LoyaltyDataBoolean * _Nullable)status os:(NSString * _Nullable)os osVersion:(NSString * _Nullable)osVersion type:(LoyaltyDataDeviceType * _Nullable)type acceptedTermsAndConditionsVersion:(NSString * _Nullable)acceptedTermsAndConditionsVersion acceptedTermsAndConditionsAt:(LoyaltyDataLong * _Nullable)acceptedTermsAndConditionsAt createdBy:(NSString * _Nullable)createdBy updatedBy:(NSString * _Nullable)updatedBy createdAt:(LoyaltyDataLong * _Nullable)createdAt updatedAt:(LoyaltyDataLong * _Nullable)updatedAt __attribute__((swift_name("doCopy(id:vid:name:model:resolution:timezone:language:token:status:os:osVersion:type:acceptedTermsAndConditionsVersion:acceptedTermsAndConditionsAt:createdBy:updatedBy:createdAt:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isSameContentOther:(LoyaltyDataDevice * _Nullable)other __attribute__((swift_name("isSameContent(other:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataLong * _Nullable acceptedTermsAndConditionsAt __attribute__((swift_name("acceptedTermsAndConditionsAt")));
@property (readonly) NSString * _Nullable acceptedTermsAndConditionsVersion __attribute__((swift_name("acceptedTermsAndConditionsVersion")));
@property (readonly) LoyaltyDataLong * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable os __attribute__((swift_name("os")));
@property (readonly) NSString * _Nullable osVersion __attribute__((swift_name("osVersion")));
@property (readonly) NSString * _Nullable resolution __attribute__((swift_name("resolution")));
@property (readonly) LoyaltyDataBoolean * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable timezone __attribute__((swift_name("timezone")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) LoyaltyDataDeviceType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) LoyaltyDataLong * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable vid __attribute__((swift_name("vid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface LoyaltyDataDeviceCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDeviceCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataDevice *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTimezone")))
@interface LoyaltyDataDeviceTimezone : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithDeviceId:(NSString *)deviceId timezone:(NSString *)timezone __attribute__((swift_name("init(deviceId:timezone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataDeviceTimezoneCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataDeviceTimezone *)doCopyDeviceId:(NSString *)deviceId timezone:(NSString *)timezone __attribute__((swift_name("doCopy(deviceId:timezone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString *timezone __attribute__((swift_name("timezone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTimezone.Companion")))
@interface LoyaltyDataDeviceTimezoneCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDeviceTimezoneCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataDeviceTimezone *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fact")))
@interface LoyaltyDataFact : LoyaltyDataBase
- (instancetype)initWithId:(NSString *)id modelId:(NSString *)modelId modelDetail:(id<LoyaltyDataFactDetail>)modelDetail expiredAt:(int64_t)expiredAt lastModified:(int64_t)lastModified modelType:(LoyaltyDataFactModelType *)modelType factType:(LoyaltyDataFactType *)factType __attribute__((swift_name("init(id:modelId:modelDetail:expiredAt:lastModified:modelType:factType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataFactCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataFact *)doCopyId:(NSString *)id modelId:(NSString *)modelId modelDetail:(id<LoyaltyDataFactDetail>)modelDetail expiredAt:(int64_t)expiredAt lastModified:(int64_t)lastModified modelType:(LoyaltyDataFactModelType *)modelType factType:(LoyaltyDataFactType *)factType __attribute__((swift_name("doCopy(id:modelId:modelDetail:expiredAt:lastModified:modelType:factType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t expiredAt __attribute__((swift_name("expiredAt")));
@property (readonly) LoyaltyDataFactType *factType __attribute__((swift_name("factType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t lastModified __attribute__((swift_name("lastModified")));
@property (readonly) id<LoyaltyDataFactDetail> modelDetail __attribute__((swift_name("modelDetail")));
@property (readonly) NSString *modelId __attribute__((swift_name("modelId")));
@property (readonly) LoyaltyDataFactModelType *modelType __attribute__((swift_name("modelType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fact.Companion")))
@interface LoyaltyDataFactCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataFactCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FactDetail")))
@protocol LoyaltyDataFactDetail
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniApp")))
@interface LoyaltyDataMiniApp : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title iconUrl:(NSString * _Nullable)iconUrl description:(NSString * _Nullable)description type:(LoyaltyDataMiniAppType *)type appIdentifier:(LoyaltyDataMiniAppIdentifier * _Nullable)appIdentifier profile:(LoyaltyDataProvider * _Nullable)profile referralId:(NSString * _Nullable)referralId __attribute__((swift_name("init(id:title:iconUrl:description:type:appIdentifier:profile:referralId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataMiniAppCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataMiniApp *)doCopyId:(NSString *)id title:(NSString * _Nullable)title iconUrl:(NSString * _Nullable)iconUrl description:(NSString * _Nullable)description type:(LoyaltyDataMiniAppType *)type appIdentifier:(LoyaltyDataMiniAppIdentifier * _Nullable)appIdentifier profile:(LoyaltyDataProvider * _Nullable)profile referralId:(NSString * _Nullable)referralId __attribute__((swift_name("doCopy(id:title:iconUrl:description:type:appIdentifier:profile:referralId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataMiniAppIdentifier * _Nullable appIdentifier __attribute__((swift_name("appIdentifier")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) LoyaltyDataProvider * _Nullable profile __attribute__((swift_name("profile")));
@property (readonly) NSString * _Nullable referralId __attribute__((swift_name("referralId")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) LoyaltyDataMiniAppType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniApp.Companion")))
@interface LoyaltyDataMiniAppCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMiniAppCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMiniApp *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (NSString *)jsonStringFromList:(NSArray<LoyaltyDataMiniApp *> *)list __attribute__((swift_name("jsonStringFrom(list:)")));
- (NSArray<LoyaltyDataMiniApp *> *)listFromStringJson:(NSString *)json __attribute__((swift_name("listFromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppIdentifier")))
@interface LoyaltyDataMiniAppIdentifier : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title identifier:(NSString * _Nullable)identifier type:(LoyaltyDataMiniAppType * _Nullable)type iosUrl:(NSString * _Nullable)iosUrl androidUrl:(NSString * _Nullable)androidUrl iosAlternativeUrl:(NSString * _Nullable)iosAlternativeUrl androidAlternativeUrl:(NSString * _Nullable)androidAlternativeUrl __attribute__((swift_name("init(id:title:identifier:type:iosUrl:androidUrl:iosAlternativeUrl:androidAlternativeUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataMiniAppIdentifierCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataMiniAppIdentifier *)doCopyId:(NSString *)id title:(NSString * _Nullable)title identifier:(NSString * _Nullable)identifier type:(LoyaltyDataMiniAppType * _Nullable)type iosUrl:(NSString * _Nullable)iosUrl androidUrl:(NSString * _Nullable)androidUrl iosAlternativeUrl:(NSString * _Nullable)iosAlternativeUrl androidAlternativeUrl:(NSString * _Nullable)androidAlternativeUrl __attribute__((swift_name("doCopy(id:title:identifier:type:iosUrl:androidUrl:iosAlternativeUrl:androidAlternativeUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataMiniAppIdentifierAction *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable androidAlternativeUrl __attribute__((swift_name("androidAlternativeUrl")));
@property (readonly) NSString * _Nullable androidUrl __attribute__((swift_name("androidUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString * _Nullable iosAlternativeUrl __attribute__((swift_name("iosAlternativeUrl")));
@property (readonly) NSString * _Nullable iosUrl __attribute__((swift_name("iosUrl")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) LoyaltyDataMiniAppType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppIdentifier.Companion")))
@interface LoyaltyDataMiniAppIdentifierCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMiniAppIdentifierCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMiniAppIdentifier *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (NSString *)jsonStringFromList:(NSArray<LoyaltyDataMiniAppIdentifier *> *)list __attribute__((swift_name("jsonStringFrom(list:)")));
- (NSArray<LoyaltyDataMiniAppIdentifier *> *)listFromStringJson:(NSString *)json __attribute__((swift_name("listFromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingInfo")))
@interface LoyaltyDataPagingInfo : LoyaltyDataBase
- (instancetype)initWithHasNextPage:(BOOL)hasNextPage pageContext:(NSString * _Nullable)pageContext __attribute__((swift_name("init(hasNextPage:pageContext:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataPagingInfoCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataPagingInfo *)doCopyHasNextPage:(BOOL)hasNextPage pageContext:(NSString * _Nullable)pageContext __attribute__((swift_name("doCopy(hasNextPage:pageContext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasNextPage __attribute__((swift_name("hasNextPage")));
@property (readonly) NSString * _Nullable pageContext __attribute__((swift_name("pageContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingInfo.Companion")))
@interface LoyaltyDataPagingInfoCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataPagingInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider")))
@interface LoyaltyDataProvider : LoyaltyDataBase <LoyaltyDataFactDetail>
- (instancetype)initWithId:(NSString *)id name:(NSString * _Nullable)name type:(LoyaltyDataProviderType * _Nullable)type description:(NSString * _Nullable)description iconName:(NSString * _Nullable)iconName iconUrl:(NSString * _Nullable)iconUrl attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:name:type:description:iconName:iconUrl:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataProviderCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataProvider *)doCopyId:(NSString *)id name:(NSString * _Nullable)name type:(LoyaltyDataProviderType * _Nullable)type description:(NSString * _Nullable)description iconName:(NSString * _Nullable)iconName iconUrl:(NSString * _Nullable)iconUrl attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:name:type:description:iconName:iconUrl:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable iconName __attribute__((swift_name("iconName")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isEnableVodAds __attribute__((swift_name("isEnableVodAds")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) LoyaltyDataProviderType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider.Companion")))
@interface LoyaltyDataProviderCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataProviderCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfiguration")))
@interface LoyaltyDataAppConfiguration : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithTheme:(LoyaltyDataTheme * _Nullable)theme __attribute__((swift_name("init(theme:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataAppConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataAppConfiguration *)doCopyTheme:(LoyaltyDataTheme * _Nullable)theme __attribute__((swift_name("doCopy(theme:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataTheme * _Nullable theme __attribute__((swift_name("theme")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfiguration.Companion")))
@interface LoyaltyDataAppConfigurationCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataAppConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataAppConfiguration *)fromStringJson:(NSString *)json __attribute__((swift_name("fromString(json:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol LoyaltyDataKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface LoyaltyDataKotlinEnum<E> : LoyaltyDataBase <LoyaltyDataKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInOption")))
@interface LoyaltyDataSignInOption : LoyaltyDataKotlinEnum<LoyaltyDataSignInOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataSignInOptionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataSignInOption *google __attribute__((swift_name("google")));
@property (class, readonly) LoyaltyDataSignInOption *apple __attribute__((swift_name("apple")));
@property (class, readonly) LoyaltyDataSignInOption *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) LoyaltyDataSignInOption *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataSignInOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataSignInOption *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInOption.Companion")))
@interface LoyaltyDataSignInOptionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataSignInOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol LoyaltyDataKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol LoyaltyDataKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol LoyaltyDataKotlinx_serialization_coreKSerializer <LoyaltyDataKotlinx_serialization_coreSerializationStrategy, LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInOptionSerializer")))
@interface LoyaltyDataSignInOptionSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signInOptionSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataSignInOptionSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataSignInOption *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataSignInOption *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme")))
@interface LoyaltyDataTheme : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name identifier:(NSString *)identifier createAt:(LoyaltyDataLong * _Nullable)createAt isDefault:(BOOL)isDefault __attribute__((swift_name("init(id:name:identifier:createAt:isDefault:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataThemeCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataTheme *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name identifier:(NSString *)identifier createAt:(LoyaltyDataLong * _Nullable)createAt isDefault:(BOOL)isDefault __attribute__((swift_name("doCopy(id:name:identifier:createAt:isDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataLong * _Nullable createAt __attribute__((swift_name("createAt")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@property (readonly) BOOL isDefault __attribute__((swift_name("isDefault")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme.Companion")))
@interface LoyaltyDataThemeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingSDK")))
@interface LoyaltyDataTrackingSDK : LoyaltyDataKotlinEnum<LoyaltyDataTrackingSDK *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataTrackingSDKCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataTrackingSDK *appsflyer __attribute__((swift_name("appsflyer")));
@property (class, readonly) LoyaltyDataTrackingSDK *clevertap __attribute__((swift_name("clevertap")));
@property (class, readonly) LoyaltyDataTrackingSDK *datasenses __attribute__((swift_name("datasenses")));
@property (class, readonly) LoyaltyDataTrackingSDK *tera __attribute__((swift_name("tera")));
@property (class, readonly) LoyaltyDataTrackingSDK *firebase __attribute__((swift_name("firebase")));
@property (class, readonly) LoyaltyDataTrackingSDK *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataTrackingSDK *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataTrackingSDK *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingSDK.Companion")))
@interface LoyaltyDataTrackingSDKCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataTrackingSDKCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingSDKSerializer")))
@interface LoyaltyDataTrackingSDKSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trackingSDKSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataTrackingSDKSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataTrackingSDK *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataTrackingSDK *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType")))
@interface LoyaltyDataDeviceType : LoyaltyDataKotlinEnum<LoyaltyDataDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataDeviceType *phone __attribute__((swift_name("phone")));
@property (class, readonly) LoyaltyDataDeviceType *tablet __attribute__((swift_name("tablet")));
@property (class, readonly) LoyaltyDataDeviceType *tv __attribute__((swift_name("tv")));
@property (class, readonly) LoyaltyDataDeviceType *pc __attribute__((swift_name("pc")));
@property (class, readonly) LoyaltyDataDeviceType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataDeviceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataDeviceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType.Companion")))
@interface LoyaltyDataDeviceTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeSerializer")))
@interface LoyaltyDataDeviceTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataDeviceTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataDeviceType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataDeviceType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactModelType")))
@interface LoyaltyDataFactModelType : LoyaltyDataKotlinEnum<LoyaltyDataFactModelType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataFactModelTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataFactModelType *provider __attribute__((swift_name("provider")));
@property (class, readonly) LoyaltyDataFactModelType *tag __attribute__((swift_name("tag")));
@property (class, readonly) LoyaltyDataFactModelType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataFactModelType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataFactModelType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactModelType.Companion")))
@interface LoyaltyDataFactModelTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataFactModelTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactModelTypeSerializer")))
@interface LoyaltyDataFactModelTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factModelTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataFactModelTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataFactModelType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataFactModelType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactType")))
@interface LoyaltyDataFactType : LoyaltyDataKotlinEnum<LoyaltyDataFactType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataFactTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataFactType *intentTag __attribute__((swift_name("intentTag")));
@property (class, readonly) LoyaltyDataFactType *interests __attribute__((swift_name("interests")));
@property (class, readonly) LoyaltyDataFactType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataFactType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataFactType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactType.Companion")))
@interface LoyaltyDataFactTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataFactTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactTypeSerializer")))
@interface LoyaltyDataFactTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataFactTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataFactType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataFactType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender")))
@interface LoyaltyDataGender : LoyaltyDataKotlinEnum<LoyaltyDataGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataGenderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataGender *male __attribute__((swift_name("male")));
@property (class, readonly) LoyaltyDataGender *female __attribute__((swift_name("female")));
@property (class, readonly) LoyaltyDataGender *other __attribute__((swift_name("other")));
+ (LoyaltyDataKotlinArray<LoyaltyDataGender *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataGender *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender.Companion")))
@interface LoyaltyDataGenderCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataGenderCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenderSerializer")))
@interface LoyaltyDataGenderSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)genderSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataGenderSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataGender *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataGender *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppIdentifierAction")))
@interface LoyaltyDataMiniAppIdentifierAction : LoyaltyDataKotlinEnum<LoyaltyDataMiniAppIdentifierAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataMiniAppIdentifierActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataMiniAppIdentifierAction *homeShopping __attribute__((swift_name("homeShopping")));
@property (class, readonly) LoyaltyDataMiniAppIdentifierAction *saymeeTopup __attribute__((swift_name("saymeeTopup")));
@property (class, readonly) LoyaltyDataMiniAppIdentifierAction *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataMiniAppIdentifierAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataMiniAppIdentifierAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppIdentifierAction.Companion")))
@interface LoyaltyDataMiniAppIdentifierActionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMiniAppIdentifierActionCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMiniAppIdentifierAction *)valueOfNameName:(NSString *)name __attribute__((swift_name("valueOfName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppType")))
@interface LoyaltyDataMiniAppType : LoyaltyDataKotlinEnum<LoyaltyDataMiniAppType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataMiniAppTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataMiniAppType *appLinkInside __attribute__((swift_name("appLinkInside")));
@property (class, readonly) LoyaltyDataMiniAppType *appLinkOutside __attribute__((swift_name("appLinkOutside")));
@property (class, readonly) LoyaltyDataMiniAppType *onlalaApp __attribute__((swift_name("onlalaApp")));
@property (class, readonly) LoyaltyDataMiniAppType *oneReelsApp __attribute__((swift_name("oneReelsApp")));
@property (class, readonly) LoyaltyDataMiniAppType *profile __attribute__((swift_name("profile")));
@property (class, readonly) LoyaltyDataMiniAppType *shoppingLandingPage __attribute__((swift_name("shoppingLandingPage")));
@property (class, readonly) LoyaltyDataMiniAppType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataMiniAppType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataMiniAppType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *miniAppType __attribute__((swift_name("miniAppType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppType.Companion")))
@interface LoyaltyDataMiniAppTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMiniAppTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (LoyaltyDataMiniAppType * _Nullable)valueOfNameName:(NSString * _Nullable)name __attribute__((swift_name("valueOfName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniAppTypeSerializer")))
@interface LoyaltyDataMiniAppTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)miniAppTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMiniAppTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMiniAppType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataMiniAppType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface LoyaltyDataPlatform : LoyaltyDataKotlinEnum<LoyaltyDataPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LoyaltyDataPlatform *android __attribute__((swift_name("android")));
@property (class, readonly) LoyaltyDataPlatform *ios __attribute__((swift_name("ios")));
@property (class, readonly) LoyaltyDataPlatform *smartTv __attribute__((swift_name("smartTv")));
+ (LoyaltyDataKotlinArray<LoyaltyDataPlatform *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataPlatform *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderType")))
@interface LoyaltyDataProviderType : LoyaltyDataKotlinEnum<LoyaltyDataProviderType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataProviderTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataProviderType *provider __attribute__((swift_name("provider")));
@property (class, readonly) LoyaltyDataProviderType *studio __attribute__((swift_name("studio")));
@property (class, readonly) LoyaltyDataProviderType *producer __attribute__((swift_name("producer")));
@property (class, readonly) LoyaltyDataProviderType *profile __attribute__((swift_name("profile")));
@property (class, readonly) LoyaltyDataProviderType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataProviderType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataProviderType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *providerType __attribute__((swift_name("providerType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderType.Companion")))
@interface LoyaltyDataProviderTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataProviderTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderTypeSerializer")))
@interface LoyaltyDataProviderTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)providerTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataProviderTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataProviderType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataProviderType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreType")))
@interface LoyaltyDataStoreType : LoyaltyDataKotlinEnum<LoyaltyDataStoreType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataStoreTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataStoreType *apple __attribute__((swift_name("apple")));
@property (class, readonly) LoyaltyDataStoreType *google __attribute__((swift_name("google")));
@property (class, readonly) LoyaltyDataStoreType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataStoreType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataStoreType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreType.Companion")))
@interface LoyaltyDataStoreTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataStoreTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreTypeSerializer")))
@interface LoyaltyDataStoreTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)storeTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataStoreTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataStoreType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataStoreType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppProductBenefit")))
@interface LoyaltyDataInAppProductBenefit : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithType:(LoyaltyDataInAppProductBenefitType * _Nullable)type value:(LoyaltyDataDouble * _Nullable)value duration:(int64_t)duration durationUnit:(LoyaltyDataProductDurationUnit * _Nullable)durationUnit followPackageExpiration:(BOOL)followPackageExpiration attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(type:value:duration:durationUnit:followPackageExpiration:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataInAppProductBenefitCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataInAppProductBenefit *)doCopyType:(LoyaltyDataInAppProductBenefitType * _Nullable)type value:(LoyaltyDataDouble * _Nullable)value duration:(int64_t)duration durationUnit:(LoyaltyDataProductDurationUnit * _Nullable)durationUnit followPackageExpiration:(BOOL)followPackageExpiration attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(type:value:duration:durationUnit:followPackageExpiration:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) int64_t durationPeriod __attribute__((swift_name("durationPeriod")));
@property (readonly) LoyaltyDataProductDurationUnit * _Nullable durationUnit __attribute__((swift_name("durationUnit")));
@property (readonly) BOOL followPackageExpiration __attribute__((swift_name("followPackageExpiration")));
@property (readonly) LoyaltyDataInAppProductBenefitType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) LoyaltyDataDouble * _Nullable value __attribute__((swift_name("value"))) __attribute__((deprecated("Client-specific values can be extracted from attributes instead")));
@property (readonly) LoyaltyDataFloat * _Nullable valueInPercent __attribute__((swift_name("valueInPercent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppProductBenefit.Companion")))
@interface LoyaltyDataInAppProductBenefitCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataInAppProductBenefitCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInAppProductBenefit")))
@interface LoyaltyDataUserInAppProductBenefit : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id userId:(NSString * _Nullable)userId benefit:(LoyaltyDataInAppProductBenefit * _Nullable)benefit attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(id:userId:benefit:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUserInAppProductBenefitCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUserInAppProductBenefit *)doCopyId:(NSString *)id userId:(NSString * _Nullable)userId benefit:(LoyaltyDataInAppProductBenefit * _Nullable)benefit attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(id:userId:benefit:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (LoyaltyDataFloat * _Nullable)getValidPercentIncreaseCurrMillisecond:(int64_t)currMillisecond __attribute__((swift_name("getValidPercentIncrease(currMillisecond:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isValidCurrMillisecond:(int64_t)currMillisecond __attribute__((swift_name("isValid(currMillisecond:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataInAppProductBenefit * _Nullable benefit __attribute__((swift_name("benefit")));
@property (readonly) int64_t endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) float percentIncrease __attribute__((swift_name("percentIncrease")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInAppProductBenefit.Companion")))
@interface LoyaltyDataUserInAppProductBenefitCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUserInAppProductBenefitCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataUserInAppProductBenefit * _Nullable)getBestValidBenefitBenefits:(id)benefits currMillisecond:(int64_t)currMillisecond __attribute__((swift_name("getBestValidBenefit(benefits:currMillisecond:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppProductBenefitType")))
@interface LoyaltyDataInAppProductBenefitType : LoyaltyDataKotlinEnum<LoyaltyDataInAppProductBenefitType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataInAppProductBenefitTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataInAppProductBenefitType *percentageIncreasing __attribute__((swift_name("percentageIncreasing")));
@property (class, readonly) LoyaltyDataInAppProductBenefitType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataInAppProductBenefitType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataInAppProductBenefitType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppProductBenefitType.Companion")))
@interface LoyaltyDataInAppProductBenefitTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataInAppProductBenefitTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (LoyaltyDataInAppProductBenefitType * _Nullable)valueOfNameName:(NSString * _Nullable)name __attribute__((swift_name("valueOfName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppProductBenefitTypeSerializer")))
@interface LoyaltyDataInAppProductBenefitTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inAppProductBenefitTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataInAppProductBenefitTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataInAppProductBenefitType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataInAppProductBenefitType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductDurationUnit")))
@interface LoyaltyDataProductDurationUnit : LoyaltyDataKotlinEnum<LoyaltyDataProductDurationUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataProductDurationUnitCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataProductDurationUnit *days __attribute__((swift_name("days")));
@property (class, readonly) LoyaltyDataProductDurationUnit *weeks __attribute__((swift_name("weeks")));
@property (class, readonly) LoyaltyDataProductDurationUnit *months __attribute__((swift_name("months")));
@property (class, readonly) LoyaltyDataProductDurationUnit *years __attribute__((swift_name("years")));
@property (class, readonly) LoyaltyDataProductDurationUnit *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataProductDurationUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataProductDurationUnit *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductDurationUnit.Companion")))
@interface LoyaltyDataProductDurationUnitCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataProductDurationUnitCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (LoyaltyDataProductDurationUnit * _Nullable)valueOfNameName:(NSString * _Nullable)name __attribute__((swift_name("valueOfName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductDurationUnitSerializer")))
@interface LoyaltyDataProductDurationUnitSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)productDurationUnitSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataProductDurationUnitSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataProductDurationUnit *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataProductDurationUnit *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurnTransactionRequest")))
@interface LoyaltyDataBurnTransactionRequest : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithReelId:(NSString *)reelId reelEpisodeId:(NSString *)reelEpisodeId __attribute__((swift_name("init(reelId:reelEpisodeId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataBurnTransactionRequestCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataBurnTransactionRequest *)doCopyReelId:(NSString *)reelId reelEpisodeId:(NSString *)reelEpisodeId __attribute__((swift_name("doCopy(reelId:reelEpisodeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *reelEpisodeId __attribute__((swift_name("reelEpisodeId")));
@property (readonly) NSString *reelId __attribute__((swift_name("reelId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurnTransactionRequest.Companion")))
@interface LoyaltyDataBurnTransactionRequestCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataBurnTransactionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInClaimRule")))
@interface LoyaltyDataCheckInClaimRule : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id continuousDay:(int64_t)continuousDay pointAmount:(int64_t)pointAmount __attribute__((swift_name("init(id:continuousDay:pointAmount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataCheckInClaimRuleCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataCheckInClaimRule *)doCopyId:(NSString *)id continuousDay:(int64_t)continuousDay pointAmount:(int64_t)pointAmount __attribute__((swift_name("doCopy(id:continuousDay:pointAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t continuousDay __attribute__((swift_name("continuousDay")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t pointAmount __attribute__((swift_name("pointAmount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckInClaimRule.Companion")))
@interface LoyaltyDataCheckInClaimRuleCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataCheckInClaimRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClaimRequest")))
@interface LoyaltyDataClaimRequest : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithContinuousCheckedInDay:(int64_t)continuousCheckedInDay pointAmount:(int64_t)pointAmount __attribute__((swift_name("init(continuousCheckedInDay:pointAmount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataClaimRequestCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataClaimRequest *)doCopyContinuousCheckedInDay:(int64_t)continuousCheckedInDay pointAmount:(int64_t)pointAmount __attribute__((swift_name("doCopy(continuousCheckedInDay:pointAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t continuousCheckedInDay __attribute__((swift_name("continuousCheckedInDay")));
@property (readonly) int64_t pointAmount __attribute__((swift_name("pointAmount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClaimRequest.Companion")))
@interface LoyaltyDataClaimRequestCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataClaimRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfiguration")))
@interface LoyaltyDataLoyaltyConfiguration : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id key:(NSString *)key value:(NSString *)value description:(NSString *)description attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:key:value:description:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataLoyaltyConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataLoyaltyConfiguration *)doCopyId:(NSString *)id key:(NSString *)key value:(NSString *)value description:(NSString *)description attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:key:value:description:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfiguration.Companion")))
@interface LoyaltyDataLoyaltyConfigurationCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyHistory")))
@interface LoyaltyDataLoyaltyHistory : LoyaltyDataBase
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId action:(LoyaltyDataLoyaltyAction *)action source:(LoyaltyDataLoyaltySource *)source coinAmount:(LoyaltyDataLong * _Nullable)coinAmount pointAmount:(LoyaltyDataLong * _Nullable)pointAmount createdAt:(int64_t)createdAt expiredAt:(LoyaltyDataLong * _Nullable)expiredAt attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:userId:action:source:coinAmount:pointAmount:createdAt:expiredAt:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataLoyaltyHistoryCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataLoyaltyHistory *)doCopyId:(NSString *)id userId:(NSString *)userId action:(LoyaltyDataLoyaltyAction *)action source:(LoyaltyDataLoyaltySource *)source coinAmount:(LoyaltyDataLong * _Nullable)coinAmount pointAmount:(LoyaltyDataLong * _Nullable)pointAmount createdAt:(int64_t)createdAt expiredAt:(LoyaltyDataLong * _Nullable)expiredAt attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:userId:action:source:coinAmount:pointAmount:createdAt:expiredAt:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataLoyaltyAction *action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataLong * _Nullable coinAmount __attribute__((swift_name("coinAmount")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) LoyaltyDataLong * _Nullable expiredAt __attribute__((swift_name("expiredAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) LoyaltyDataMission * _Nullable mission __attribute__((swift_name("mission")));
@property (readonly) LoyaltyDataLong * _Nullable pointAmount __attribute__((swift_name("pointAmount")));
@property (readonly) LoyaltyDataPrize * _Nullable prize __attribute__((swift_name("prize")));
@property (readonly) LoyaltyDataLoyaltySource *source __attribute__((swift_name("source")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyHistory.Companion")))
@interface LoyaltyDataLoyaltyHistoryCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mission")))
@interface LoyaltyDataMission : LoyaltyDataBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name category:(LoyaltyDataMissionCategory *)category type:(LoyaltyDataMissionType *)type pointAmount:(int64_t)pointAmount orderPosition:(LoyaltyDataLong * _Nullable)orderPosition target:(LoyaltyDataLong * _Nullable)target userMission:(LoyaltyDataUserMission *)userMission attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes pointPerProgress:(LoyaltyDataLong * _Nullable)pointPerProgress __attribute__((swift_name("init(id:name:category:type:pointAmount:orderPosition:target:userMission:attributes:pointPerProgress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataMissionCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataMission *)doCopyId:(NSString *)id name:(NSString *)name category:(LoyaltyDataMissionCategory *)category type:(LoyaltyDataMissionType *)type pointAmount:(int64_t)pointAmount orderPosition:(LoyaltyDataLong * _Nullable)orderPosition target:(LoyaltyDataLong * _Nullable)target userMission:(LoyaltyDataUserMission *)userMission attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes pointPerProgress:(LoyaltyDataLong * _Nullable)pointPerProgress __attribute__((swift_name("doCopy(id:name:category:type:pointAmount:orderPosition:target:userMission:attributes:pointPerProgress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataMissionCategory *category __attribute__((swift_name("category")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) LoyaltyDataLong * _Nullable orderPosition __attribute__((swift_name("orderPosition")));
@property (readonly) int64_t pointAmount __attribute__((swift_name("pointAmount")));
@property (readonly) LoyaltyDataLong * _Nullable pointPerProgress __attribute__((swift_name("pointPerProgress")));
@property (readonly) LoyaltyDataLong * _Nullable target __attribute__((swift_name("target")));
@property (readonly) LoyaltyDataMissionType *type __attribute__((swift_name("type")));
@property (readonly) LoyaltyDataUserMission *userMission __attribute__((swift_name("userMission")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mission.Companion")))
@interface LoyaltyDataMissionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Prize")))
@interface LoyaltyDataPrize : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:name:description:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataPrizeCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataPrize *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name description:(NSString * _Nullable)description attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:name:description:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable localisedName __attribute__((swift_name("localisedName")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Prize.Companion")))
@interface LoyaltyDataPrizeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataPrizeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferralHistory")))
@interface LoyaltyDataReferralHistory : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId referralId:(NSString *)referralId createdAt:(int64_t)createdAt userProfile:(LoyaltyDataUserProfile * _Nullable)userProfile attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:userId:referralId:createdAt:userProfile:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataReferralHistoryCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataReferralHistory *)doCopyId:(NSString *)id userId:(NSString *)userId referralId:(NSString *)referralId createdAt:(int64_t)createdAt userProfile:(LoyaltyDataUserProfile * _Nullable)userProfile attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:userId:referralId:createdAt:userProfile:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *referralId __attribute__((swift_name("referralId")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) LoyaltyDataUserProfile * _Nullable userProfile __attribute__((swift_name("userProfile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferralHistory.Companion")))
@interface LoyaltyDataReferralHistoryCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataReferralHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserMissionProgressRequest")))
@interface LoyaltyDataUpdateUserMissionProgressRequest : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithMissionType:(LoyaltyDataMissionType *)missionType properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties __attribute__((swift_name("init(missionType:properties:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUpdateUserMissionProgressRequestCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUpdateUserMissionProgressRequest *)doCopyMissionType:(LoyaltyDataMissionType *)missionType properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties __attribute__((swift_name("doCopy(missionType:properties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataMissionType *missionType __attribute__((swift_name("missionType")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable properties __attribute__((swift_name("properties")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserMissionProgressRequest.Companion")))
@interface LoyaltyDataUpdateUserMissionProgressRequestCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUpdateUserMissionProgressRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLoyalty")))
@interface LoyaltyDataUserLoyalty : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id userId:(NSString * _Nullable)userId deviceId:(NSString * _Nullable)deviceId timezone:(NSString * _Nullable)timezone coinBalance:(int64_t)coinBalance pointBalance:(int64_t)pointBalance lastCheckedInTime:(LoyaltyDataLong * _Nullable)lastCheckedInTime continuousCheckedInDay:(LoyaltyDataLong * _Nullable)continuousCheckedInDay enableNotification:(BOOL)enableNotification todayAdBasedUnlocked:(int32_t)todayAdBasedUnlocked dailyLimitAdBasedUnlock:(int32_t)dailyLimitAdBasedUnlock __attribute__((swift_name("init(id:userId:deviceId:timezone:coinBalance:pointBalance:lastCheckedInTime:continuousCheckedInDay:enableNotification:todayAdBasedUnlocked:dailyLimitAdBasedUnlock:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUserLoyaltyCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUserLoyalty *)doCopyId:(NSString *)id userId:(NSString * _Nullable)userId deviceId:(NSString * _Nullable)deviceId timezone:(NSString * _Nullable)timezone coinBalance:(int64_t)coinBalance pointBalance:(int64_t)pointBalance lastCheckedInTime:(LoyaltyDataLong * _Nullable)lastCheckedInTime continuousCheckedInDay:(LoyaltyDataLong * _Nullable)continuousCheckedInDay enableNotification:(BOOL)enableNotification todayAdBasedUnlocked:(int32_t)todayAdBasedUnlocked dailyLimitAdBasedUnlock:(int32_t)dailyLimitAdBasedUnlock __attribute__((swift_name("doCopy(id:userId:deviceId:timezone:coinBalance:pointBalance:lastCheckedInTime:continuousCheckedInDay:enableNotification:todayAdBasedUnlocked:dailyLimitAdBasedUnlock:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t coinBalance __attribute__((swift_name("coinBalance")));
@property (readonly) LoyaltyDataLong * _Nullable continuousCheckedInDay __attribute__((swift_name("continuousCheckedInDay")));
@property (readonly) int32_t dailyLimitAdBasedUnlock __attribute__((swift_name("dailyLimitAdBasedUnlock")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) BOOL enableNotification __attribute__((swift_name("enableNotification")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) LoyaltyDataLong * _Nullable lastCheckedInTime __attribute__((swift_name("lastCheckedInTime")));
@property (readonly) int64_t pointBalance __attribute__((swift_name("pointBalance")));
@property (readonly) NSString * _Nullable timezone __attribute__((swift_name("timezone")));
@property (readonly) int32_t todayAdBasedUnlocked __attribute__((swift_name("todayAdBasedUnlocked")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLoyalty.Companion")))
@interface LoyaltyDataUserLoyaltyCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUserLoyaltyCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMission")))
@interface LoyaltyDataUserMission : LoyaltyDataBase <LoyaltyDataJsonEncode>
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId missionId:(NSString *)missionId progress:(LoyaltyDataLong * _Nullable)progress status:(LoyaltyDataMissionStatus *)status attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("init(id:userId:missionId:progress:status:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUserMissionCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUserMission *)doCopyId:(NSString *)id userId:(NSString *)userId missionId:(NSString *)missionId progress:(LoyaltyDataLong * _Nullable)progress status:(LoyaltyDataMissionStatus *)status attributes:(NSDictionary<NSString *, NSString *> * _Nullable)attributes __attribute__((swift_name("doCopy(id:userId:missionId:progress:status:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *missionId __attribute__((swift_name("missionId")));
@property (readonly) LoyaltyDataLong * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) LoyaltyDataMissionStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMission.Companion")))
@interface LoyaltyDataUserMissionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUserMissionCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyAction")))
@interface LoyaltyDataLoyaltyAction : LoyaltyDataKotlinEnum<LoyaltyDataLoyaltyAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataLoyaltyActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataLoyaltyAction *burn __attribute__((swift_name("burn")));
@property (class, readonly) LoyaltyDataLoyaltyAction *earn __attribute__((swift_name("earn")));
@property (class, readonly) LoyaltyDataLoyaltyAction *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataLoyaltyAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataLoyaltyAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyAction.Companion")))
@interface LoyaltyDataLoyaltyActionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyActionCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyActionSerializer")))
@interface LoyaltyDataLoyaltyActionSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loyaltyActionSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyActionSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataLoyaltyAction *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataLoyaltyAction *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfigurationKey")))
@interface LoyaltyDataLoyaltyConfigurationKey : LoyaltyDataKotlinEnum<LoyaltyDataLoyaltyConfigurationKey *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataLoyaltyConfigurationKeyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataLoyaltyConfigurationKey *inputReferralPoint __attribute__((swift_name("inputReferralPoint")));
@property (class, readonly) LoyaltyDataLoyaltyConfigurationKey *firstLoginPoint __attribute__((swift_name("firstLoginPoint")));
@property (class, readonly) LoyaltyDataLoyaltyConfigurationKey *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataLoyaltyConfigurationKey *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataLoyaltyConfigurationKey *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfigurationKey.Companion")))
@interface LoyaltyDataLoyaltyConfigurationKeyCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyConfigurationKeyCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfigurationKeySerializer")))
@interface LoyaltyDataLoyaltyConfigurationKeySerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loyaltyConfigurationKeySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltyConfigurationKeySerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataLoyaltyConfigurationKey *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataLoyaltyConfigurationKey *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltySource")))
@interface LoyaltyDataLoyaltySource : LoyaltyDataKotlinEnum<LoyaltyDataLoyaltySource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataLoyaltySourceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataLoyaltySource *checkIn __attribute__((swift_name("checkIn")));
@property (class, readonly) LoyaltyDataLoyaltySource *mission __attribute__((swift_name("mission")));
@property (class, readonly) LoyaltyDataLoyaltySource *unlockVideo __attribute__((swift_name("unlockVideo")));
@property (class, readonly) LoyaltyDataLoyaltySource *inAppPurchasePoint __attribute__((swift_name("inAppPurchasePoint")));
@property (class, readonly) LoyaltyDataLoyaltySource *inAppPurchaseCoin __attribute__((swift_name("inAppPurchaseCoin")));
@property (class, readonly) LoyaltyDataLoyaltySource *referral __attribute__((swift_name("referral")));
@property (class, readonly) LoyaltyDataLoyaltySource *prize __attribute__((swift_name("prize")));
@property (class, readonly) LoyaltyDataLoyaltySource *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataLoyaltySource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataLoyaltySource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltySource.Companion")))
@interface LoyaltyDataLoyaltySourceCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltySourceCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltySourceSerializer")))
@interface LoyaltyDataLoyaltySourceSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loyaltySourceSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataLoyaltySourceSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataLoyaltySource *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataLoyaltySource *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionCategory")))
@interface LoyaltyDataMissionCategory : LoyaltyDataKotlinEnum<LoyaltyDataMissionCategory *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataMissionCategoryCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataMissionCategory *theNewUser __attribute__((swift_name("theNewUser")));
@property (class, readonly) LoyaltyDataMissionCategory *daily __attribute__((swift_name("daily")));
@property (class, readonly) LoyaltyDataMissionCategory *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataMissionCategory *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataMissionCategory *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionCategory.Companion")))
@interface LoyaltyDataMissionCategoryCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionCategoryCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionCategorySerializer")))
@interface LoyaltyDataMissionCategorySerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)missionCategorySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionCategorySerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMissionCategory *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataMissionCategory *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionStatus")))
@interface LoyaltyDataMissionStatus : LoyaltyDataKotlinEnum<LoyaltyDataMissionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataMissionStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataMissionStatus *toDo __attribute__((swift_name("toDo")));
@property (class, readonly) LoyaltyDataMissionStatus *done __attribute__((swift_name("done")));
@property (class, readonly) LoyaltyDataMissionStatus *claimed __attribute__((swift_name("claimed")));
@property (class, readonly) LoyaltyDataMissionStatus *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataMissionStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataMissionStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionStatus.Companion")))
@interface LoyaltyDataMissionStatusCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionStatusSerializer")))
@interface LoyaltyDataMissionStatusSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)missionStatusSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionStatusSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMissionStatus *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataMissionStatus *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionType")))
@interface LoyaltyDataMissionType : LoyaltyDataKotlinEnum<LoyaltyDataMissionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataMissionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataMissionType *firstLogin __attribute__((swift_name("firstLogin")));
@property (class, readonly) LoyaltyDataMissionType *enableNotification __attribute__((swift_name("enableNotification")));
@property (class, readonly) LoyaltyDataMissionType *updateProfile __attribute__((swift_name("updateProfile")));
@property (class, readonly) LoyaltyDataMissionType *shareVideo __attribute__((swift_name("shareVideo")));
@property (class, readonly) LoyaltyDataMissionType *watchVideo __attribute__((swift_name("watchVideo")));
@property (class, readonly) LoyaltyDataMissionType *watchAds __attribute__((swift_name("watchAds")));
@property (class, readonly) LoyaltyDataMissionType *referral __attribute__((swift_name("referral")));
@property (class, readonly) LoyaltyDataMissionType *unknown __attribute__((swift_name("unknown")));
+ (LoyaltyDataKotlinArray<LoyaltyDataMissionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataMissionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionType.Companion")))
@interface LoyaltyDataMissionTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissionTypeSerializer")))
@interface LoyaltyDataMissionTypeSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)missionTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataMissionTypeSerializer *shared __attribute__((swift_name("shared")));
- (LoyaltyDataMissionType *)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataMissionType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfile")))
@interface LoyaltyDataUserProfile : LoyaltyDataBase
- (instancetype)initWithId:(NSString *)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName state:(NSString * _Nullable)state avatarUrl:(NSString * _Nullable)avatarUrl phoneNumber:(NSString * _Nullable)phoneNumber email:(NSString * _Nullable)email gender:(LoyaltyDataGender * _Nullable)gender birthDay:(LoyaltyDataInt * _Nullable)birthDay birthMonth:(LoyaltyDataInt * _Nullable)birthMonth birthYear:(LoyaltyDataInt * _Nullable)birthYear saymeePhoneNumber:(NSString * _Nullable)saymeePhoneNumber emailVerified:(LoyaltyDataBoolean * _Nullable)emailVerified __attribute__((swift_name("init(id:firstName:lastName:state:avatarUrl:phoneNumber:email:gender:birthDay:birthMonth:birthYear:saymeePhoneNumber:emailVerified:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataUserProfileCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataUserProfile *)doCopyId:(NSString *)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName state:(NSString * _Nullable)state avatarUrl:(NSString * _Nullable)avatarUrl phoneNumber:(NSString * _Nullable)phoneNumber email:(NSString * _Nullable)email gender:(LoyaltyDataGender * _Nullable)gender birthDay:(LoyaltyDataInt * _Nullable)birthDay birthMonth:(LoyaltyDataInt * _Nullable)birthMonth birthYear:(LoyaltyDataInt * _Nullable)birthYear saymeePhoneNumber:(NSString * _Nullable)saymeePhoneNumber emailVerified:(LoyaltyDataBoolean * _Nullable)emailVerified __attribute__((swift_name("doCopy(id:firstName:lastName:state:avatarUrl:phoneNumber:email:gender:birthDay:birthMonth:birthYear:saymeePhoneNumber:emailVerified:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)userId __attribute__((swift_name("userId()")));
- (NSString *)userName __attribute__((swift_name("userName()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) LoyaltyDataInt * _Nullable birthDay __attribute__((swift_name("birthDay")));
@property (readonly) LoyaltyDataInt * _Nullable birthMonth __attribute__((swift_name("birthMonth")));
@property (readonly) LoyaltyDataInt * _Nullable birthYear __attribute__((swift_name("birthYear")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) LoyaltyDataBoolean * _Nullable emailVerified __attribute__((swift_name("emailVerified")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) LoyaltyDataGender * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString * _Nullable saymeePhoneNumber __attribute__((swift_name("saymeePhoneNumber")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfile.Companion")))
@interface LoyaltyDataUserProfileCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataUserProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("AuthenticatorListener")))
@protocol LoyaltyDataAuthenticatorListener
@required
- (void)onUnAuthorized __attribute__((swift_name("onUnAuthorized()")));
@end

__attribute__((swift_name("OnRequestServiceErrorListener")))
@protocol LoyaltyDataOnRequestServiceErrorListener
@required
- (void)onAccessDenied __attribute__((swift_name("onAccessDenied()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface LoyaltyDataKotlinThrowable : LoyaltyDataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (LoyaltyDataKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinError")))
@interface LoyaltyDataKotlinError : LoyaltyDataKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ONError")))
@interface LoyaltyDataONError : LoyaltyDataKotlinError
- (instancetype)initWithCode:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) LoyaltyDataONErrorCode *code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("OnHttpError")))
@interface LoyaltyDataOnHttpError : LoyaltyDataONError
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable apiErrorCode __attribute__((swift_name("apiErrorCode")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataNotFoundError")))
@interface LoyaltyDataDataNotFoundError : LoyaltyDataOnHttpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForbiddenError")))
@interface LoyaltyDataForbiddenError : LoyaltyDataOnHttpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLError")))
@interface LoyaltyDataGraphQLError : LoyaltyDataONError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternetConnectionError")))
@interface LoyaltyDataInternetConnectionError : LoyaltyDataONError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCode:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LicensesOnContentError")))
@interface LoyaltyDataLicensesOnContentError : LoyaltyDataOnHttpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ONErrorCode")))
@interface LoyaltyDataONErrorCode : LoyaltyDataKotlinEnum<LoyaltyDataONErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LoyaltyDataONErrorCode *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) LoyaltyDataONErrorCode *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) LoyaltyDataONErrorCode *badRequest __attribute__((swift_name("badRequest")));
@property (class, readonly) LoyaltyDataONErrorCode *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) LoyaltyDataONErrorCode *graphql __attribute__((swift_name("graphql")));
@property (class, readonly) LoyaltyDataONErrorCode *internet __attribute__((swift_name("internet")));
@property (class, readonly) LoyaltyDataONErrorCode *onApp __attribute__((swift_name("onApp")));
@property (class, readonly) LoyaltyDataONErrorCode *noLicensesOnContent __attribute__((swift_name("noLicensesOnContent")));
@property (class, readonly) LoyaltyDataONErrorCode *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) LoyaltyDataONErrorCode *insufficientBalance __attribute__((swift_name("insufficientBalance")));
@property (class, readonly) LoyaltyDataONErrorCode *userMergingDevice __attribute__((swift_name("userMergingDevice")));
@property (class, readonly) LoyaltyDataONErrorCode *invalidReferralCode __attribute__((swift_name("invalidReferralCode")));
@property (class, readonly) LoyaltyDataONErrorCode *userAlreadyApplyReferralCode __attribute__((swift_name("userAlreadyApplyReferralCode")));
+ (LoyaltyDataKotlinArray<LoyaltyDataONErrorCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataONErrorCode *> *entries __attribute__((swift_name("entries")));
- (NSString * _Nullable)errorCode __attribute__((swift_name("errorCode()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedError")))
@interface LoyaltyDataUnauthorizedError : LoyaltyDataOnHttpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownError")))
@interface LoyaltyDataUnknownError : LoyaltyDataONError
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMergingDeviceError")))
@interface LoyaltyDataUserMergingDeviceError : LoyaltyDataOnHttpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStatusCode:(int32_t)statusCode apiErrorCode:(NSString * _Nullable)apiErrorCode code:(LoyaltyDataONErrorCode *)code message:(NSString *)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(statusCode:apiErrorCode:code:message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponse")))
@interface LoyaltyDataApiResponse<T> : LoyaltyDataBase
- (instancetype)initWithSuccess:(BOOL)success data:(T _Nullable)data statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("init(success:data:statusCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataApiResponseCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataApiResponse<T> *)doCopySuccess:(BOOL)success data:(T _Nullable)data statusCode:(NSString * _Nullable)statusCode __attribute__((swift_name("doCopy(success:data:statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseCompanion")))
@interface LoyaltyDataApiResponseCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<LoyaltyDataKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface LoyaltyDataErrorResponse : LoyaltyDataBase
- (instancetype)initWithStatusCode:(NSString * _Nullable)statusCode errorCode:(NSString * _Nullable)errorCode error:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("init(statusCode:errorCode:error:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataErrorResponse *)doCopyStatusCode:(NSString * _Nullable)statusCode errorCode:(NSString * _Nullable)errorCode error:(NSString * _Nullable)error message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(statusCode:errorCode:error:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface LoyaltyDataErrorResponseCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginationResponse")))
@interface LoyaltyDataPaginationResponse<T> : LoyaltyDataBase
- (instancetype)initWithTotal:(int64_t)total size:(int32_t)size page:(int32_t)page items:(NSArray<id> *)items __attribute__((swift_name("init(total:size:page:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataPaginationResponseCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataPaginationResponse<T> *)doCopyTotal:(int64_t)total size:(int32_t)size page:(int32_t)page items:(NSArray<id> *)items __attribute__((swift_name("doCopy(total:size:page:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *items __attribute__((swift_name("items")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) int64_t total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginationResponseCompanion")))
@interface LoyaltyDataPaginationResponseCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataPaginationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<LoyaltyDataKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingResponse")))
@interface LoyaltyDataPagingResponse<T> : LoyaltyDataBase
- (instancetype)initWithPagingInfo:(LoyaltyDataPagingInfo *)pagingInfo data:(NSArray<id> *)data __attribute__((swift_name("init(pagingInfo:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataPagingResponseCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataPagingResponse<T> *)doCopyPagingInfo:(LoyaltyDataPagingInfo *)pagingInfo data:(NSArray<id> *)data __attribute__((swift_name("doCopy(pagingInfo:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *data __attribute__((swift_name("data")));
@property (readonly) LoyaltyDataPagingInfo *pagingInfo __attribute__((swift_name("pagingInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingResponseCompanion")))
@interface LoyaltyDataPagingResponseCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataPagingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LoyaltyDataKotlinArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<LoyaltyDataKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonProvider")))
@interface LoyaltyDataJsonProvider : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataJsonProvider *shared __attribute__((swift_name("shared")));
- (NSString *)encodeToStringData:(id _Nullable)data __attribute__((swift_name("encodeToString(data:)")));
@property (readonly) LoyaltyDataKotlinx_serialization_jsonJson *OnJson __attribute__((swift_name("OnJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullableProviderSerializer")))
@interface LoyaltyDataNullableProviderSerializer : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreKSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LoyaltyDataProvider * _Nullable)deserializeDecoder:(id<LoyaltyDataKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<LoyaltyDataKotlinx_serialization_coreEncoder>)encoder value:(LoyaltyDataProvider * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("LoyaltyService")))
@protocol LoyaltyDataLoyaltyService
@required

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adBasedTransaction:(LoyaltyDataBurnTransactionRequest *)transaction completionHandler:(void (^)(LoyaltyDataLoyaltyHistory * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adBased(transaction:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)applyReferralCodeReferralCode:(NSString *)referralCode completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("applyReferralCode(referralCode:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)burnTransaction:(LoyaltyDataBurnTransactionRequest *)transaction completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("burn(transaction:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkIfUserAppliedReferralCodeWithCompletionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkIfUserAppliedReferralCode(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)claimCheckInPointClaimRequest:(LoyaltyDataClaimRequest *)claimRequest completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("claimCheckInPoint(claimRequest:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)claimMissionPointMissionId:(NSString *)missionId completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("claimMissionPoint(missionId:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigurationKey:(LoyaltyDataLoyaltyConfigurationKey *)key completionHandler:(void (^)(LoyaltyDataLoyaltyConfiguration * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfiguration(key:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIapBenefitsWithCompletionHandler:(void (^)(NSArray<LoyaltyDataUserInAppProductBenefit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getIapBenefits(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListCheckInPointWithCompletionHandler:(void (^)(NSArray<LoyaltyDataCheckInClaimRule *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListCheckInPoint(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListLoyaltyHistoryPageSize:(int32_t)pageSize action:(LoyaltyDataLoyaltyAction * _Nullable)action sources:(NSArray<LoyaltyDataLoyaltySource *> *)sources pageContext:(NSString * _Nullable)pageContext completionHandler:(void (^)(LoyaltyDataPagingResponse<LoyaltyDataLoyaltyHistory *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListLoyaltyHistory(pageSize:action:sources:pageContext:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListMissionWithCompletionHandler:(void (^)(NSArray<LoyaltyDataMission *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListMission(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListMissionByTypeType:(LoyaltyDataMissionType *)type completionHandler:(void (^)(NSArray<LoyaltyDataMission *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListMissionByType(type:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMiniAppsPageSize:(int32_t)pageSize pageContext:(NSString * _Nullable)pageContext completionHandler:(void (^)(LoyaltyDataPagingResponse<LoyaltyDataMiniApp *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMiniApps(pageSize:pageContext:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReferralCodeWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReferralCode(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReferralListPageSize:(int32_t)pageSize pageContext:(NSString * _Nullable)pageContext completionHandler:(void (^)(LoyaltyDataPagingResponse<LoyaltyDataReferralHistory *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReferralList(pageSize:pageContext:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(LoyaltyDataUserLoyalty * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setupWithCompletionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setup(completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserEnableNotification:(BOOL)enableNotification completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUser(enableNotification:completionHandler:)")));

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserMissionProgressUpdateRequest:(LoyaltyDataUpdateUserMissionProgressRequest *)updateRequest completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserMissionProgress(updateRequest:completionHandler:)")));
@end

__attribute__((swift_name("OnAppDataStorageInterface")))
@protocol LoyaltyDataOnAppDataStorageInterface
@required
- (NSArray<NSString *> *)allKeys __attribute__((swift_name("allKeys()")));
- (BOOL)clear __attribute__((swift_name("clear()")));
- (BOOL)deleteObjectForKey:(NSString *)forKey __attribute__((swift_name("deleteObject(forKey:)")));
- (BOOL)existsObjectForKey:(NSString *)forKey __attribute__((swift_name("existsObject(forKey:)")));
- (LoyaltyDataBoolean * _Nullable)getBoolForKey:(NSString *)forKey defaultValue:(LoyaltyDataBoolean * _Nullable)defaultValue __attribute__((swift_name("getBool(forKey:defaultValue:)")));
- (LoyaltyDataDouble * _Nullable)getDoubleForKey:(NSString *)forKey defaultValue:(LoyaltyDataDouble * _Nullable)defaultValue __attribute__((swift_name("getDouble(forKey:defaultValue:)")));
- (LoyaltyDataFloat * _Nullable)getFloatForKey:(NSString *)forKey defaultValue:(LoyaltyDataFloat * _Nullable)defaultValue __attribute__((swift_name("getFloat(forKey:defaultValue:)")));
- (LoyaltyDataInt * _Nullable)getIntForKey:(NSString *)forKey defaultValue:(LoyaltyDataInt * _Nullable)defaultValue __attribute__((swift_name("getInt(forKey:defaultValue:)")));
- (LoyaltyDataLong * _Nullable)getLongForKey:(NSString *)forKey defaultValue:(LoyaltyDataLong * _Nullable)defaultValue __attribute__((swift_name("getLong(forKey:defaultValue:)")));
- (NSString * _Nullable)getStringForKey:(NSString *)forKey defaultValue:(NSString * _Nullable)defaultValue __attribute__((swift_name("getString(forKey:defaultValue:)")));
- (void)setKey:(NSString *)key boolValue:(BOOL)boolValue __attribute__((swift_name("set(key:boolValue:)")));
- (void)setKey:(NSString *)key doubleValue:(double)doubleValue __attribute__((swift_name("set(key:doubleValue:)")));
- (void)setKey:(NSString *)key floatValue:(float)floatValue __attribute__((swift_name("set(key:floatValue:)")));
- (void)setKey:(NSString *)key intValue:(int32_t)intValue __attribute__((swift_name("set(key:intValue:)")));
- (void)setKey:(NSString *)key longValue:(int64_t)longValue __attribute__((swift_name("set(key:longValue:)")));
- (void)setKey:(NSString *)key stringValue:(NSString *)stringValue __attribute__((swift_name("set(key:stringValue:)")));
@end

__attribute__((swift_name("OnAppDataStorage")))
@interface LoyaltyDataOnAppDataStorage : LoyaltyDataBase <LoyaltyDataOnAppDataStorageInterface>
- (instancetype)initWithServiceName:(NSString * _Nullable)serviceName accessGroup:(NSString * _Nullable)accessGroup accessibility:(LoyaltyDataOnAppDataStorageAccessible *)accessibility __attribute__((swift_name("init(serviceName:accessGroup:accessibility:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)allKeys __attribute__((swift_name("allKeys()")));
- (BOOL)clear __attribute__((swift_name("clear()")));
- (BOOL)deleteObjectForKey:(NSString *)forKey __attribute__((swift_name("deleteObject(forKey:)")));
- (BOOL)existsObjectForKey:(NSString *)forKey __attribute__((swift_name("existsObject(forKey:)")));
- (LoyaltyDataBoolean * _Nullable)getBoolForKey:(NSString *)forKey defaultValue:(LoyaltyDataBoolean * _Nullable)defaultValue __attribute__((swift_name("getBool(forKey:defaultValue:)")));
- (LoyaltyDataDouble * _Nullable)getDoubleForKey:(NSString *)forKey defaultValue:(LoyaltyDataDouble * _Nullable)defaultValue __attribute__((swift_name("getDouble(forKey:defaultValue:)")));
- (LoyaltyDataFloat * _Nullable)getFloatForKey:(NSString *)forKey defaultValue:(LoyaltyDataFloat * _Nullable)defaultValue __attribute__((swift_name("getFloat(forKey:defaultValue:)")));
- (LoyaltyDataInt * _Nullable)getIntForKey:(NSString *)forKey defaultValue:(LoyaltyDataInt * _Nullable)defaultValue __attribute__((swift_name("getInt(forKey:defaultValue:)")));
- (LoyaltyDataLong * _Nullable)getLongForKey:(NSString *)forKey defaultValue:(LoyaltyDataLong * _Nullable)defaultValue __attribute__((swift_name("getLong(forKey:defaultValue:)")));
- (NSString * _Nullable)getStringForKey:(NSString *)forKey defaultValue:(NSString * _Nullable)defaultValue __attribute__((swift_name("getString(forKey:defaultValue:)")));
- (void)setKey:(NSString *)key boolValue:(BOOL)boolValue __attribute__((swift_name("set(key:boolValue:)")));
- (void)setKey:(NSString *)key doubleValue:(double)doubleValue __attribute__((swift_name("set(key:doubleValue:)")));
- (void)setKey:(NSString *)key floatValue:(float)floatValue __attribute__((swift_name("set(key:floatValue:)")));
- (void)setKey:(NSString *)key intValue:(int32_t)intValue __attribute__((swift_name("set(key:intValue:)")));
- (void)setKey:(NSString *)key longValue:(int64_t)longValue __attribute__((swift_name("set(key:longValue:)")));
- (void)setKey:(NSString *)key stringValue:(NSString *)stringValue __attribute__((swift_name("set(key:stringValue:)")));
@property (readonly) NSString * _Nullable accessGroup __attribute__((swift_name("accessGroup")));
@property (readonly) LoyaltyDataOnAppDataStorageAccessible *accessibility __attribute__((swift_name("accessibility")));
@property (readonly) NSString * _Nullable serviceName __attribute__((swift_name("serviceName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnAppDataStorage.Accessible")))
@interface LoyaltyDataOnAppDataStorageAccessible : LoyaltyDataKotlinEnum<LoyaltyDataOnAppDataStorageAccessible *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LoyaltyDataOnAppDataStorageAccessible *whenpasscodesetthisdeviceonly __attribute__((swift_name("whenpasscodesetthisdeviceonly")));
@property (class, readonly) LoyaltyDataOnAppDataStorageAccessible *whenunlockedthisdeviceonly __attribute__((swift_name("whenunlockedthisdeviceonly")));
@property (class, readonly) LoyaltyDataOnAppDataStorageAccessible *whenunlocked __attribute__((swift_name("whenunlocked")));
@property (class, readonly) LoyaltyDataOnAppDataStorageAccessible *afterfirstunlock __attribute__((swift_name("afterfirstunlock")));
@property (class, readonly) LoyaltyDataOnAppDataStorageAccessible *afterfirstunlockthisdeviceonly __attribute__((swift_name("afterfirstunlockthisdeviceonly")));
+ (LoyaltyDataKotlinArray<LoyaltyDataOnAppDataStorageAccessible *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataOnAppDataStorageAccessible *> *entries __attribute__((swift_name("entries")));
@property (readonly) void * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RemoteConfigService")))
@protocol LoyaltyDataRemoteConfigService
@required

/**
 * @note This method converts instances of ONError, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRemoteConfigUrl:(NSString *)url completionHandler:(void (^)(LoyaltyDataRemoteConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getRemoteConfig(url:completionHandler:)")));
@end

__attribute__((swift_name("TrackingService")))
@protocol LoyaltyDataTrackingService
@required
- (void)trackEventName:(NSString *)name properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties forceCleanQueue:(BOOL)forceCleanQueue __attribute__((swift_name("trackEvent(name:properties:forceCleanQueue:)")));
- (void)trackViewName:(NSString *)name properties:(NSDictionary<NSString *, NSString *> * _Nullable)properties __attribute__((swift_name("trackView(name:properties:)")));
@end

@interface LoyaltyDataMission (Extensions)
@property (readonly) NSString *localisedName __attribute__((swift_name("localisedName")));
@property (readonly) LoyaltyDataLong * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) NSString * _Nullable progressDescription __attribute__((swift_name("progressDescription")));
@property (readonly) LoyaltyDataMissionStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface LoyaltyDataKtor_client_coreHttpClientConfig<T> : LoyaltyDataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LoyaltyDataKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(LoyaltyDataKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<LoyaltyDataKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(LoyaltyDataKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(LoyaltyDataKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

@interface LoyaltyDataKtor_client_coreHttpClientConfig (Extensions)
- (void)applyEngineConfig __attribute__((swift_name("applyEngineConfig()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnyKt")))
@interface LoyaltyDataAnyKt : LoyaltyDataBase
+ (NSString * _Nullable)getLocalizeAssets:(NSDictionary<NSString *, NSString *> * _Nullable)receiver key:(NSString *)key lang:(NSString * _Nullable)lang __attribute__((swift_name("getLocalizeAssets(_:key:lang:)")));
+ (NSString * _Nullable)getLocalizedValue:(NSDictionary<NSString *, NSString *> * _Nullable)receiver key:(NSString *)key defValue:(NSString * _Nullable)defValue __attribute__((swift_name("getLocalizedValue(_:key:defValue:)")));
+ (NSString * _Nullable)toStringOrNull:(id _Nullable)receiver __attribute__((swift_name("toStringOrNull(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementExtensionsKt")))
@interface LoyaltyDataJsonElementExtensionsKt : LoyaltyDataBase
+ (LoyaltyDataKotlinx_serialization_jsonJsonElement *)toJsonElement:(id _Nullable)receiver __attribute__((swift_name("toJsonElement(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkHelperKt")))
@interface LoyaltyDataNetworkHelperKt : LoyaltyDataBase
+ (BOOL)isNetworkAvailable __attribute__((swift_name("isNetworkAvailable()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnAppDataStorageKt")))
@interface LoyaltyDataOnAppDataStorageKt : LoyaltyDataBase
+ (void)clearAuthenticationToken __attribute__((swift_name("clearAuthenticationToken()")));
+ (id<LoyaltyDataOnAppDataStorageInterface>)getStorage __attribute__((swift_name("getStorage()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneLoyaltyKt")))
@interface LoyaltyDataOneLoyaltyKt : LoyaltyDataBase
+ (id<LoyaltyDataAuthenticatorListener> _Nullable)authenticatorListener __attribute__((swift_name("authenticatorListener()")));
+ (LoyaltyDataRemoteConfig *)getConfig __attribute__((swift_name("getConfig()")));
+ (id<LoyaltyDataKtor_client_coreHttpClientEngineFactory>)getHttpClientEngine __attribute__((swift_name("getHttpClientEngine()")));
+ (id<LoyaltyDataOnRequestServiceErrorListener> _Nullable)onRequestErrorListener __attribute__((swift_name("onRequestErrorListener()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParameterBuilderKt")))
@interface LoyaltyDataParameterBuilderKt : LoyaltyDataBase
+ (void)appendAllParams:(id<LoyaltyDataKtor_httpParametersBuilder>)receiver params:(NSDictionary<NSString *, id> *)params __attribute__((swift_name("appendAllParams(_:params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface LoyaltyDataPlatformKt : LoyaltyDataBase
+ (LoyaltyDataPlatform *)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinException")))
@interface LoyaltyDataKotlinException : LoyaltyDataKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface LoyaltyDataKotlinRuntimeException : LoyaltyDataKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface LoyaltyDataKotlinIllegalStateException : LoyaltyDataKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface LoyaltyDataKotlinCancellationException : LoyaltyDataKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface LoyaltyDataKotlinEnumCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LoyaltyDataKotlinArray<T> : LoyaltyDataBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LoyaltyDataInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LoyaltyDataKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol LoyaltyDataKotlinx_serialization_coreEncoder
@required
- (id<LoyaltyDataKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<LoyaltyDataKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<LoyaltyDataKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol LoyaltyDataKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<LoyaltyDataKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<LoyaltyDataKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol LoyaltyDataKotlinx_serialization_coreDecoder
@required
- (id<LoyaltyDataKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<LoyaltyDataKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (LoyaltyDataKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol LoyaltyDataKotlinx_serialization_coreSerialFormat
@required
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol LoyaltyDataKotlinx_serialization_coreStringFormat <LoyaltyDataKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface LoyaltyDataKotlinx_serialization_jsonJson : LoyaltyDataBase <LoyaltyDataKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) LoyaltyDataKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(LoyaltyDataKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (LoyaltyDataKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (LoyaltyDataKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) LoyaltyDataKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol LoyaltyDataKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol LoyaltyDataKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface LoyaltyDataKtor_client_coreHttpClient : LoyaltyDataBase <LoyaltyDataKotlinx_coroutines_coreCoroutineScope, LoyaltyDataKtor_ioCloseable>
- (instancetype)initWithEngine:(id<LoyaltyDataKtor_client_coreHttpClientEngine>)engine userConfig:(LoyaltyDataKtor_client_coreHttpClientConfig<LoyaltyDataKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (LoyaltyDataKtor_client_coreHttpClient *)configBlock:(void (^)(LoyaltyDataKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<LoyaltyDataKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<LoyaltyDataKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) LoyaltyDataKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) LoyaltyDataKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) LoyaltyDataKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) LoyaltyDataKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) LoyaltyDataKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) LoyaltyDataKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol LoyaltyDataKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(LoyaltyDataKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) LoyaltyDataKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface LoyaltyDataKotlinx_serialization_jsonJsonElement : LoyaltyDataBase
@property (class, readonly, getter=companion) LoyaltyDataKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineFactory")))
@protocol LoyaltyDataKtor_client_coreHttpClientEngineFactory
@required
- (id<LoyaltyDataKtor_client_coreHttpClientEngine>)createBlock:(void (^)(LoyaltyDataKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("create(block:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol LoyaltyDataKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LoyaltyDataKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LoyaltyDataKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LoyaltyDataKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear_ __attribute__((swift_name("clear_()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LoyaltyDataKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol LoyaltyDataKtor_httpParametersBuilder <LoyaltyDataKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol LoyaltyDataKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol LoyaltyDataKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<LoyaltyDataKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface LoyaltyDataKotlinx_serialization_coreSerializersModule : LoyaltyDataBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<LoyaltyDataKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<LoyaltyDataKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol LoyaltyDataKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface LoyaltyDataKotlinx_serialization_coreSerialKind : LoyaltyDataBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol LoyaltyDataKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<LoyaltyDataKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<LoyaltyDataKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) LoyaltyDataKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface LoyaltyDataKotlinNothing : LoyaltyDataBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface LoyaltyDataKotlinx_serialization_jsonJsonDefault : LoyaltyDataKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface LoyaltyDataKotlinx_serialization_jsonJsonConfiguration : LoyaltyDataBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol LoyaltyDataKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<LoyaltyDataKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<LoyaltyDataKotlinCoroutineContextElement> _Nullable)getKey:(id<LoyaltyDataKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<LoyaltyDataKotlinCoroutineContext>)minusKeyKey:(id<LoyaltyDataKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<LoyaltyDataKotlinCoroutineContext>)plusContext:(id<LoyaltyDataKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol LoyaltyDataKtor_client_coreHttpClientEngine <LoyaltyDataKotlinx_coroutines_coreCoroutineScope, LoyaltyDataKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(LoyaltyDataKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(LoyaltyDataKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(LoyaltyDataKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) LoyaltyDataKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<LoyaltyDataKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface LoyaltyDataKtor_client_coreHttpClientEngineConfig : LoyaltyDataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property LoyaltyDataKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol LoyaltyDataKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol LoyaltyDataKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly, getter=allKeys_) NSArray<LoyaltyDataKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface LoyaltyDataKtor_eventsEvents : LoyaltyDataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(LoyaltyDataKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<LoyaltyDataKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(LoyaltyDataKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(LoyaltyDataKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface LoyaltyDataKtor_utilsPipeline<TSubject, TContext> : LoyaltyDataBase
- (instancetype)initWithPhases:(LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(LoyaltyDataKtor_utilsPipelinePhase *)reference phase:(LoyaltyDataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(LoyaltyDataKtor_utilsPipelinePhase *)reference phase:(LoyaltyDataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase block:(id<LoyaltyDataKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(LoyaltyDataKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(LoyaltyDataKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(LoyaltyDataKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<LoyaltyDataKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface LoyaltyDataKtor_client_coreHttpReceivePipeline : LoyaltyDataKtor_utilsPipeline<LoyaltyDataKtor_client_coreHttpResponse *, LoyaltyDataKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface LoyaltyDataKtor_client_coreHttpRequestPipeline : LoyaltyDataKtor_utilsPipeline<id, LoyaltyDataKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface LoyaltyDataKtor_client_coreHttpResponsePipeline : LoyaltyDataKtor_utilsPipeline<LoyaltyDataKtor_client_coreHttpResponseContainer *, LoyaltyDataKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface LoyaltyDataKtor_client_coreHttpSendPipeline : LoyaltyDataKtor_utilsPipeline<id, LoyaltyDataKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LoyaltyDataKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LoyaltyDataKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface LoyaltyDataKtor_utilsAttributeKey<T> : LoyaltyDataBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface LoyaltyDataKotlinx_serialization_jsonJsonElementCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol LoyaltyDataKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LoyaltyDataKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol LoyaltyDataKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol LoyaltyDataKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<LoyaltyDataKotlinKClass>)kClass provider:(id<LoyaltyDataKotlinx_serialization_coreKSerializer> (^)(NSArray<id<LoyaltyDataKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<LoyaltyDataKotlinKClass>)kClass serializer:(id<LoyaltyDataKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass actualClass:(id<LoyaltyDataKotlinKClass>)actualClass actualSerializer:(id<LoyaltyDataKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass defaultDeserializerProvider:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass defaultDeserializerProvider:(id<LoyaltyDataKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<LoyaltyDataKotlinKClass>)baseClass defaultSerializerProvider:(id<LoyaltyDataKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol LoyaltyDataKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol LoyaltyDataKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol LoyaltyDataKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol LoyaltyDataKotlinKClass <LoyaltyDataKotlinKDeclarationContainer, LoyaltyDataKotlinKAnnotatedElement, LoyaltyDataKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol LoyaltyDataKotlinCoroutineContextElement <LoyaltyDataKotlinCoroutineContext>
@required
@property (readonly) id<LoyaltyDataKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol LoyaltyDataKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface LoyaltyDataKtor_client_coreHttpRequestData : LoyaltyDataBase
- (instancetype)initWithUrl:(LoyaltyDataKtor_httpUrl *)url method:(LoyaltyDataKtor_httpHttpMethod *)method headers:(id<LoyaltyDataKtor_httpHeaders>)headers body:(LoyaltyDataKtor_httpOutgoingContent *)body executionContext:(id<LoyaltyDataKotlinx_coroutines_coreJob>)executionContext attributes:(id<LoyaltyDataKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<LoyaltyDataKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<LoyaltyDataKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<LoyaltyDataKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LoyaltyDataKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface LoyaltyDataKtor_client_coreHttpResponseData : LoyaltyDataBase
- (instancetype)initWithStatusCode:(LoyaltyDataKtor_httpHttpStatusCode *)statusCode requestTime:(LoyaltyDataKtor_utilsGMTDate *)requestTime headers:(id<LoyaltyDataKtor_httpHeaders>)headers version:(LoyaltyDataKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<LoyaltyDataKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<LoyaltyDataKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LoyaltyDataKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LoyaltyDataKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface LoyaltyDataKotlinAbstractCoroutineContextElement : LoyaltyDataBase <LoyaltyDataKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<LoyaltyDataKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<LoyaltyDataKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol LoyaltyDataKotlinContinuationInterceptor <LoyaltyDataKotlinCoroutineContextElement>
@required
- (id<LoyaltyDataKotlinContinuation>)interceptContinuationContinuation:(id<LoyaltyDataKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<LoyaltyDataKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher : LoyaltyDataKotlinAbstractCoroutineContextElement <LoyaltyDataKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<LoyaltyDataKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<LoyaltyDataKotlinCoroutineContext>)context block:(id<LoyaltyDataKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<LoyaltyDataKotlinCoroutineContext>)context block:(id<LoyaltyDataKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<LoyaltyDataKotlinContinuation>)interceptContinuationContinuation:(id<LoyaltyDataKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<LoyaltyDataKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<LoyaltyDataKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface LoyaltyDataKtor_client_coreProxyConfig : LoyaltyDataBase
- (instancetype)initWithUrl:(LoyaltyDataKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface LoyaltyDataKtor_eventsEventDefinition<T> : LoyaltyDataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol LoyaltyDataKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface LoyaltyDataKtor_utilsPipelinePhase : LoyaltyDataBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol LoyaltyDataKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol LoyaltyDataKotlinSuspendFunction2 <LoyaltyDataKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface LoyaltyDataKtor_client_coreHttpReceivePipelinePhases : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol LoyaltyDataKtor_httpHttpMessage
@required
@property (readonly) id<LoyaltyDataKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface LoyaltyDataKtor_client_coreHttpResponse : LoyaltyDataBase <LoyaltyDataKtor_httpHttpMessage, LoyaltyDataKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<LoyaltyDataKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) LoyaltyDataKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LoyaltyDataKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface LoyaltyDataKotlinUnit : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface LoyaltyDataKtor_client_coreHttpRequestPipelinePhases : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol LoyaltyDataKtor_httpHttpMessageBuilder
@required
@property (readonly) LoyaltyDataKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface LoyaltyDataKtor_client_coreHttpRequestBuilder : LoyaltyDataBase <LoyaltyDataKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<LoyaltyDataKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<LoyaltyDataKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<LoyaltyDataKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (LoyaltyDataKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(LoyaltyDataKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (LoyaltyDataKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(LoyaltyDataKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(LoyaltyDataKtor_httpURLBuilder *, LoyaltyDataKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property LoyaltyDataKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<LoyaltyDataKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) LoyaltyDataKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property LoyaltyDataKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LoyaltyDataKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface LoyaltyDataKtor_client_coreHttpResponsePipelinePhases : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface LoyaltyDataKtor_client_coreHttpResponseContainer : LoyaltyDataBase
- (instancetype)initWithExpectedType:(LoyaltyDataKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (LoyaltyDataKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(LoyaltyDataKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LoyaltyDataKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface LoyaltyDataKtor_client_coreHttpClientCall : LoyaltyDataBase <LoyaltyDataKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(LoyaltyDataKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(LoyaltyDataKtor_client_coreHttpClient *)client requestData:(LoyaltyDataKtor_client_coreHttpRequestData *)requestData responseData:(LoyaltyDataKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(LoyaltyDataKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(LoyaltyDataKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<LoyaltyDataKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<LoyaltyDataKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property LoyaltyDataKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface LoyaltyDataKtor_client_coreHttpSendPipelinePhases : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LoyaltyDataKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface LoyaltyDataKtor_httpUrl : LoyaltyDataBase
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LoyaltyDataKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface LoyaltyDataKtor_httpHttpMethod : LoyaltyDataBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol LoyaltyDataKtor_httpHeaders <LoyaltyDataKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface LoyaltyDataKtor_httpOutgoingContent : LoyaltyDataBase
- (id _Nullable)getPropertyKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(LoyaltyDataKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<LoyaltyDataKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) LoyaltyDataLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) LoyaltyDataKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<LoyaltyDataKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol LoyaltyDataKotlinx_coroutines_coreJob <LoyaltyDataKotlinCoroutineContextElement>
@required
- (id<LoyaltyDataKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<LoyaltyDataKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(LoyaltyDataKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (LoyaltyDataKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<LoyaltyDataKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(LoyaltyDataKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<LoyaltyDataKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(LoyaltyDataKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<LoyaltyDataKotlinx_coroutines_coreJob>)plusOther_:(id<LoyaltyDataKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<LoyaltyDataKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<LoyaltyDataKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<LoyaltyDataKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface LoyaltyDataKtor_httpHttpStatusCode : LoyaltyDataBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (LoyaltyDataKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface LoyaltyDataKtor_utilsGMTDate : LoyaltyDataBase <LoyaltyDataKotlinComparable>
@property (class, readonly, getter=companion) LoyaltyDataKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(LoyaltyDataKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (LoyaltyDataKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(LoyaltyDataKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(LoyaltyDataKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) LoyaltyDataKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) LoyaltyDataKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface LoyaltyDataKtor_httpHttpProtocolVersion : LoyaltyDataBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol LoyaltyDataKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface LoyaltyDataKotlinAbstractCoroutineContextKey<B, E> : LoyaltyDataBase <LoyaltyDataKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<LoyaltyDataKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<LoyaltyDataKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcherKey : LoyaltyDataKotlinAbstractCoroutineContextKey<id<LoyaltyDataKotlinContinuationInterceptor>, LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<LoyaltyDataKotlinCoroutineContextKey>)baseKey safeCast:(id<LoyaltyDataKotlinCoroutineContextElement> _Nullable (^)(id<LoyaltyDataKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol LoyaltyDataKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol LoyaltyDataKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(LoyaltyDataKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(LoyaltyDataLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(LoyaltyDataKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(LoyaltyDataLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(LoyaltyDataKtor_ioChunkBuffer *)dst completionHandler:(void (^)(LoyaltyDataInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(LoyaltyDataKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(LoyaltyDataKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(LoyaltyDataInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(LoyaltyDataInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(LoyaltyDataInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(LoyaltyDataByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(LoyaltyDataDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(LoyaltyDataFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(LoyaltyDataKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(LoyaltyDataKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(LoyaltyDataInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(LoyaltyDataLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(LoyaltyDataKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(LoyaltyDataKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<LoyaltyDataKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(LoyaltyDataShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<LoyaltyDataKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<LoyaltyDataKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(LoyaltyDataBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) LoyaltyDataKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface LoyaltyDataKtor_utilsStringValuesBuilderImpl : LoyaltyDataBase <LoyaltyDataKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LoyaltyDataKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LoyaltyDataKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LoyaltyDataKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear_ __attribute__((swift_name("clear_()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LoyaltyDataKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) LoyaltyDataMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface LoyaltyDataKtor_httpHeadersBuilder : LoyaltyDataKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<LoyaltyDataKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface LoyaltyDataKtor_client_coreHttpRequestBuilderCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface LoyaltyDataKtor_httpURLBuilder : LoyaltyDataBase
- (instancetype)initWithProtocol:(LoyaltyDataKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<LoyaltyDataKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<LoyaltyDataKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LoyaltyDataKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property LoyaltyDataKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface LoyaltyDataKtor_utilsTypeInfo : LoyaltyDataBase
- (instancetype)initWithType:(id<LoyaltyDataKotlinKClass>)type reifiedType:(id<LoyaltyDataKotlinKType>)reifiedType kotlinType:(id<LoyaltyDataKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (LoyaltyDataKtor_utilsTypeInfo *)doCopyType:(id<LoyaltyDataKotlinKClass>)type reifiedType:(id<LoyaltyDataKotlinKType>)reifiedType kotlinType:(id<LoyaltyDataKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LoyaltyDataKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<LoyaltyDataKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<LoyaltyDataKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface LoyaltyDataKtor_client_coreHttpClientCallCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol LoyaltyDataKtor_client_coreHttpRequest <LoyaltyDataKtor_httpHttpMessage, LoyaltyDataKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<LoyaltyDataKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LoyaltyDataKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) LoyaltyDataKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LoyaltyDataKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface LoyaltyDataKtor_httpUrlCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol LoyaltyDataKtor_httpParameters <LoyaltyDataKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface LoyaltyDataKtor_httpURLProtocol : LoyaltyDataBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface LoyaltyDataKtor_httpHttpMethodCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<LoyaltyDataKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) LoyaltyDataKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface LoyaltyDataKtor_httpHeaderValueWithParameters : LoyaltyDataBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LoyaltyDataKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<LoyaltyDataKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface LoyaltyDataKtor_httpContentType : LoyaltyDataKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<LoyaltyDataKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LoyaltyDataKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(LoyaltyDataKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (LoyaltyDataKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (LoyaltyDataKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol LoyaltyDataKotlinx_coroutines_coreChildHandle <LoyaltyDataKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(LoyaltyDataKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<LoyaltyDataKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol LoyaltyDataKotlinx_coroutines_coreChildJob <LoyaltyDataKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<LoyaltyDataKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol LoyaltyDataKotlinSequence
@required
- (id<LoyaltyDataKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol LoyaltyDataKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) LoyaltyDataKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<LoyaltyDataKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(LoyaltyDataKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<LoyaltyDataKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol LoyaltyDataKotlinx_coroutines_coreSelectClause0 <LoyaltyDataKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface LoyaltyDataKtor_httpHttpStatusCodeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) LoyaltyDataKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<LoyaltyDataKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface LoyaltyDataKtor_utilsGMTDateCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface LoyaltyDataKtor_utilsWeekDay : LoyaltyDataKotlinEnum<LoyaltyDataKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) LoyaltyDataKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface LoyaltyDataKtor_utilsMonth : LoyaltyDataKotlinEnum<LoyaltyDataKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) LoyaltyDataKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (LoyaltyDataKotlinArray<LoyaltyDataKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface LoyaltyDataKtor_httpHttpProtocolVersionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (LoyaltyDataKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) LoyaltyDataKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface LoyaltyDataKtor_ioMemory : LoyaltyDataBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(LoyaltyDataKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(LoyaltyDataKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (LoyaltyDataKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (LoyaltyDataKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface LoyaltyDataKtor_ioBuffer : LoyaltyDataBase
- (instancetype)initWithMemory:(LoyaltyDataKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (LoyaltyDataKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(LoyaltyDataKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) LoyaltyDataKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface LoyaltyDataKtor_ioChunkBuffer : LoyaltyDataKtor_ioBuffer
- (instancetype)initWithMemory:(LoyaltyDataKtor_ioMemory *)memory origin:(LoyaltyDataKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<LoyaltyDataKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(LoyaltyDataKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (LoyaltyDataKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<LoyaltyDataKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) LoyaltyDataKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) LoyaltyDataKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface LoyaltyDataKotlinByteArray : LoyaltyDataBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(LoyaltyDataByte *(^)(LoyaltyDataInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (LoyaltyDataKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface LoyaltyDataKtor_ioInput : LoyaltyDataBase <LoyaltyDataKtor_ioCloseable>
- (instancetype)initWithHead:(LoyaltyDataKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<LoyaltyDataKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (LoyaltyDataKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(LoyaltyDataKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(LoyaltyDataKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(LoyaltyDataKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<LoyaltyDataKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<LoyaltyDataKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<LoyaltyDataKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface LoyaltyDataKtor_ioByteReadPacket : LoyaltyDataKtor_ioInput
- (instancetype)initWithHead:(LoyaltyDataKtor_ioChunkBuffer *)head pool:(id<LoyaltyDataKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(LoyaltyDataKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<LoyaltyDataKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LoyaltyDataKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (LoyaltyDataKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (LoyaltyDataKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(LoyaltyDataKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol LoyaltyDataKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (LoyaltyDataKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol LoyaltyDataKotlinSuspendFunction1 <LoyaltyDataKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol LoyaltyDataKotlinAppendable
@required
- (id<LoyaltyDataKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<LoyaltyDataKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<LoyaltyDataKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface LoyaltyDataKtor_httpURLBuilderCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol LoyaltyDataKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<LoyaltyDataKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<LoyaltyDataKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface LoyaltyDataKtor_httpURLProtocolCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) LoyaltyDataKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, LoyaltyDataKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface LoyaltyDataKtor_httpHeaderValueParam : LoyaltyDataBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (LoyaltyDataKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface LoyaltyDataKtor_httpHeaderValueWithParametersCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<LoyaltyDataKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface LoyaltyDataKtor_httpContentTypeCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LoyaltyDataKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol LoyaltyDataKotlinx_coroutines_coreParentJob <LoyaltyDataKotlinx_coroutines_coreJob>
@required
- (LoyaltyDataKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol LoyaltyDataKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<LoyaltyDataKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<LoyaltyDataKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface LoyaltyDataKtor_utilsWeekDayCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LoyaltyDataKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface LoyaltyDataKtor_utilsMonthCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (LoyaltyDataKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LoyaltyDataKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface LoyaltyDataKtor_ioMemoryCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface LoyaltyDataKtor_ioBufferCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol LoyaltyDataKtor_ioObjectPool <LoyaltyDataKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface LoyaltyDataKtor_ioChunkBufferCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<LoyaltyDataKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<LoyaltyDataKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface LoyaltyDataKotlinByteIterator : LoyaltyDataBase <LoyaltyDataKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LoyaltyDataByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface LoyaltyDataKtor_ioInputCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface LoyaltyDataKtor_ioByteReadPacketCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) LoyaltyDataKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface LoyaltyDataKotlinKTypeProjection : LoyaltyDataBase
- (instancetype)initWithVariance:(LoyaltyDataKotlinKVariance * _Nullable)variance type:(id<LoyaltyDataKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LoyaltyDataKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (LoyaltyDataKotlinKTypeProjection *)doCopyVariance:(LoyaltyDataKotlinKVariance * _Nullable)variance type:(id<LoyaltyDataKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LoyaltyDataKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) LoyaltyDataKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface LoyaltyDataKotlinKVariance : LoyaltyDataKotlinEnum<LoyaltyDataKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LoyaltyDataKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) LoyaltyDataKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) LoyaltyDataKotlinKVariance *out __attribute__((swift_name("out")));
+ (LoyaltyDataKotlinArray<LoyaltyDataKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LoyaltyDataKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface LoyaltyDataKotlinKTypeProjectionCompanion : LoyaltyDataBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LoyaltyDataKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LoyaltyDataKotlinKTypeProjection *)contravariantType:(id<LoyaltyDataKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LoyaltyDataKotlinKTypeProjection *)covariantType:(id<LoyaltyDataKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LoyaltyDataKotlinKTypeProjection *)invariantType:(id<LoyaltyDataKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) LoyaltyDataKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
