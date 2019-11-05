/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLRequest, NSMutableURLRequest, __NSCFURLSession, NSURLSessionEffectiveConfiguration, NSUUID, __CFN_TaskMetrics;

@interface CONNECTION_SessionTask : NSObject {

	NSURLRequest* _originalRequest;
	NSMutableURLRequest* _currentRequest;
	double _startTime;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	__NSCFURLSession* _session_ivar;
	NSURLSessionEffectiveConfiguration* _effectiveConfiguration;
	NSUUID* _uniqueIdentifier;
	BOOL _is_cellular;
	Class _my_protocolForTask;
	BOOL __shouldSkipPreferredClientCertificateLookup;
	CFDictionaryRef _atsStateCache;
	BOOL _preventsAppSSO;
	BOOL _appSSOFallback;
	__CFN_TaskMetrics* _metrics;

}

@property (nonatomic,retain) __CFN_TaskMetrics * _metrics;              //@synthesize metrics=_metrics - In the implementation block
-(void)dealloc;
-(id)error;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(id)currentRequest;
-(void)set_protocolForTask:(id)arg1 ;
-(id)_protocolForTask;
-(id)_effectiveConfiguration;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)initWithRequest:(id)arg1 mutableCurrent:(id)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(id)workQueue;
-(id)state;
-(void)updateCurrentRequest:(id)arg1 ;
-(id)session;
-(double)startTime;
-(id)_loggableDescription;
-(CFURLRef)currentRequest_URL;
-(id)taskIdentifier;
-(id)countOfBytesReceived;
-(__CFN_TaskMetrics *)_metrics;
-(id)originalRequest;
-(CFDictionaryRef)_copySocketStreamProperties;
-(id)countOfBytesExpectedToReceive;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(id)_uniqueIdentifier;
-(void)_consumePendingBytesReceivedEncoded;
-(long long)_bytesPerSecondLimit;
-(long long)_suspensionThreshhold;
-(id)_storagePartitionIdentifier;
-(void)set_trailers:(id)arg1 ;
-(unsigned long long)_expectedProgressTarget;
-(id)_priorityValue;
-(id)countOfBytesExpectedToSend;
-(id)countOfBytesSent;
-(const _CFData*)_TCPConnectionMetadata;
-(CFDictionaryRef)_proxySettings;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(id)_backgroundTransactionMetrics;
-(id)_private_nw_activity;
-(id)_httpConnectionInfoCompletionBlock;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(CFDictionaryRef)_copyATSState;
-(unsigned long long)_cachePolicy;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)set_TCPConnectionMetadata:(id)arg1 ;
-(id)_APSRelayTopic;
-(void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldSkipPipelineProbe;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned long long)_allowedProtocolTypes;
-(long long)_requestPriority;
-(CFDictionaryRef)_sslSettings;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(id)_prohibitAuthUI;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(float)priority;
-(double)_timeoutInterval;
-(void)set_connectionIsCompanionLink:(BOOL)arg1 ;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(const _CFDictionary*)_DuetActivityProperties;
-(CFDictionaryRef)_dependencyInfo;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(BOOL)_appSSOFallback;
-(unsigned char)_strictContentLength;
-(BOOL)_cacheOnly;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(id)_siteForCookies;
-(BOOL)_isTopLevelNavigation;
-(CFURLRef)currentRequest_mainDocumentURL;
-(int)_cookieAcceptPolicy;
-(id)_expectedWorkload;
-(id)_boundInterfaceIdentifier;
-(id)_disallowCellular;
-(id)_allowsExpensiveOverride;
-(id)_allowsConstrainedOverride;
-(id)_allowsCellularOverride;
-(id)_networkServiceType;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(unsigned short)_TLSNegotiatedCipherSuite;
-(id)_cfHSTS;
-(id)_cfCache;
-(id)_cfCreds;
-(id)_cfCookies;
-(id)_contentDispositionFallbackArray;
-(id)_trailers;
-(BOOL)_preventsAppSSO;
-(id)_shouldHandleCookies;
-(id)_allowsCellular;
-(BOOL)_allowsQUIC;
-(unsigned char)_preventsIdleSystemSleep;
-(BOOL)_preconnect;
-(BOOL)_connectionIsCompanionLink;
-(void)set_expectedProgressTarget:(unsigned long long)arg1 ;
-(void)_setAppleIDContext:(id)arg1 ;
-(id)_incompleteTaskMetrics;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(void)set_preconnect:(BOOL)arg1 ;
-(id)_countOfPendingBytesReceivedEncoded;
-(id)_countOfBytesReceivedEncoded;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(void)set_appSSOFallback:(BOOL)arg1 ;
-(void)set_allowsQUIC:(BOOL)arg1 ;
-(void)_processConnectionProperties;
-(id)_connectionPropertyDuet;
-(BOOL)hasExtractor;
-(long long)_discretionaryOverrride;
@end
