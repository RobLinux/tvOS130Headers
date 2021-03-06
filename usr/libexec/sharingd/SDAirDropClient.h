/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDAirDropFileZipperDelegate.h>
#import <sharingd/SDBonjourResolverDelegate.h>
#import <sharingd/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropClientDelegate;
@class NSURLResponse, NSURLSessionUploadTask, NSString, NSProgress, NSMutableArray, NSMutableDictionary, NSMutableSet, NSArray, SDAirDropPeerMetric, SDStatusMonitor, NSObject, NSMutableData, SDBonjourResolver, NSNumber, NSURL, NSURLSession, SDXPCHelperConnection, SDAirDropFileZipper;

@interface SDAirDropClient : NSObject <SDAirDropFileZipperDelegate, SDBonjourResolverDelegate, NSURLSessionDataDelegate> {

	NSURLResponse* _askResponse;
	NSURLSessionUploadTask* _askTask;
	BOOL _cancelled;
	NSString* _clientBundleID;
	NSString* _compressionType;
	NSString* _connectionKey;
	BOOL _conversionNotified;
	BOOL _conversionObserver;
	NSProgress* _conversionProgress;
	BOOL _discover;
	NSURLResponse* _discoverResponse;
	NSURLSessionUploadTask* _discoverTask;
	int _failCount;
	CGImageRef _fileIcon;
	NSMutableArray* _fileURLs;
	NSMutableDictionary* _fileURLToConversionNeeded;
	NSMutableSet* _generatedFiles;
	SecIdentityRef _identity;
	NSArray* _items;
	long long _lastEvent;
	NSMutableArray* _mediaFormatConversionDestinations;
	SDAirDropPeerMetric* _metric;
	SDStatusMonitor* _monitor;
	NSMutableArray* _otherStuff;
	BOOL _p2pRetained;
	SFNodeRef _person;
	BOOL _personAdded;
	unsigned _powerAssertionID;
	NSProgress* _progress;
	NSMutableDictionary* _properties;
	BOOL _providedStream;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queueSuspended;
	NSMutableData* _receiverData;
	SDBonjourResolver* _resolver;
	NSNumber* _sendingLivePhotoJPEGs;
	SecTrustRef _serverTrust;
	NSURL* _serverURL;
	NSURLSession* _session;
	BOOL _shouldPublishProgress;
	CGImageRef _smallFileIcon;
	double _startTime;
	NSURL* _tmpDirectoryToCleanUp;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _transactionStarted;
	NSProgress* _transferProgress;
	BOOL _uploadFinished;
	NSURLResponse* _uploadResponse;
	NSURLSessionUploadTask* _uploadTask;
	NSMutableArray* _weblocURLs;
	SDXPCHelperConnection* _xpcHelperConnection;
	SDAirDropFileZipper* _zipper;
	BOOL _zipperFinished;
	int _clientPid;
	id<SDAirDropClientDelegate> _delegate;
	SCD_Struct_SD1 _auditToken;

}

@property (assign) SCD_Struct_SD1 auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int clientPid;                                     //@synthesize clientPid=_clientPid - In the implementation block
@property (readonly) NSString * personID; 
@property (copy) NSString * clientBundleID;                           //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) BOOL shouldPublishProgress;              //@synthesize shouldPublishProgress=_shouldPublishProgress - In the implementation block
@property (readonly) SecTrustRef secTrustRef; 
@property (__weak) id<SDAirDropClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SDAirDropClientDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropClientDelegate>)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)resolve;
-(SCD_Struct_SD1)auditToken;
-(void)activate;
-(BOOL)send;
-(void)setAuditToken:(SCD_Struct_SD1)arg1 ;
-(NSString *)personID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
-(void)createSession;
-(void)didFinishLoading;
-(void)sendRequest:(id)arg1 ;
-(int)clientPid;
-(void)setClientPid:(int)arg1 ;
-(void)finishOperation;
-(void)addObservers;
-(void)removeObservers;
-(id)initWithPerson:(SFNodeRef)arg1 items:(id)arg2 forDiscovery:(BOOL)arg3 ;
-(void)setShouldPublishProgress:(BOOL)arg1 ;
-(void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2 ;
-(void)releaseIdleSleepAssertion;
-(void)systemWillSleep:(id)arg1 ;
-(void)legacyModeChanged:(id)arg1 ;
-(void)wirelessPowerChanged:(id)arg1 ;
-(SecTrustRef)secTrustRef;
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void*)arg3 ;
-(void)notifyClientForEvent:(long long)arg1 withProperty:(void*)arg2 ;
-(void)currentPeerChanged:(id)arg1 ;
-(BOOL)requireAWDL;
-(void)addBlockerInfo:(CFDictionaryRef)arg1 toProperties:(CFDictionaryRef)arg2 ;
-(void)storePropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)setSpotlightMetadata:(id)arg1 ;
-(void)donateTransferInteractionToDuet;
-(double)getTransferRate;
-(void)cancelSendingClassroom;
-(void)startZipping;
-(void)releasePeerToPeerIfPossible:(id)arg1 ;
-(void)logInterfaceUsedForSending:(id)arg1 ;
-(void)storeDataValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)storeStringValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2 ;
-(BOOL)parseAskResponse:(_CFError*)arg1 ;
-(void)retryRequestForError:(id)arg1 ;
-(BOOL)parseDiscoverResponse:(_CFError*)arg1 ;
-(void)didStartSendingAskBodyData;
-(void)didFinishSendingAskBodyData;
-(void)didFail:(id)arg1 ;
-(BOOL)shouldCancelTransferForError:(id)arg1 ;
-(BOOL)connectionOverP2P:(CFDataRef)arg1 ;
-(void)evaluateReceiverTrust:(SecTrustRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)addHashesAndValidationRecordToRequest:(id)arg1 ;
-(id)discoverBodyDataInFormat:(long long)arg1 ;
-(id)askBodyDataInFormat:(long long)arg1 ;
-(id)temporaryWeblocURL:(CFURLRef)arg1 ;
-(id)webURLFromInternetLocationFile:(id)arg1 ;
-(id)internetLocationFile:(CFURLRef)arg1 ;
-(id)realPathURL:(CFURLRef)arg1 ;
-(BOOL)replaceFileURLsWithRealPaths;
-(void)generatePreviewForFileURL:(id)arg1 ;
-(void)appendFileURL:(id)arg1 withBase:(id)arg2 toItems:(id)arg3 ;
-(void)convertMediaItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPublishingProgress;
-(void)startSendingClassroom;
-(void)removeFileIconsFromProperties;
-(void)validateAirDropItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)splitOutFileURLs;
-(void)startSending;
-(id)whereFromInfo;
-(void)storeArrayValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(SecKeyRef)copyReceiverPublicKey;
-(id)tmpDirectory;
-(BOOL)shouldPublishProgress;
@end

