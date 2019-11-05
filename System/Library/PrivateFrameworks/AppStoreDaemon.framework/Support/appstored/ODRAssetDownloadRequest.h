/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SZExtractorDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableArray, IXPromisedOutOfBandTransfer, NSObject, AssetPromise, NSString, NSDictionary, NSUUID, NSProgress, NSDate, NSURL, ODRTagsRequest, ODRApplication, AMSPromise, KeepAlive;

@interface ODRAssetDownloadRequest : NSObject <SZExtractorDelegate> {

	NSMutableArray* _duplicateDownloads;
	IXPromisedOutOfBandTransfer* _outOfBandTransferPromise;
	unsigned long long _simulatedDownloadTickCount;
	NSObject*<OS_dispatch_source> _simulatedDownloadTimer;
	BOOL _discretionary;
	BOOL _hasRefreshed;
	BOOL _shouldPin;
	BOOL _streamable;
	BOOL _useLocalCache;
	BOOL _storeBased;
	unsigned _qosClass;
	AssetPromise* _assetPromise;
	NSString* _bundleID;
	NSString* _bundleKey;
	NSDictionary* _contentHashDictionary;
	NSUUID* _coordinatorID;
	NSString* _destinationPath;
	long long _downloadSize;
	long long _expectedDiskUsage;
	NSDictionary* _hashingData;
	double _loadingPriority;
	NSString* _logKey;
	long long _pinCount;
	NSProgress* _progress;
	NSDate* _requestStartDate;
	NSURL* _sourceURL;
	ODRTagsRequest* _tagsRequest;
	long long _type;
	NSString* _uniqueKey;
	ODRApplication* _application;
	AMSPromise* _completionPromise;
	KeepAlive* _keepAlive;

}

@property (copy) ODRApplication * application;                                            //@synthesize application=_application - In the implementation block
@property (copy) NSString * bundleID;                                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * bundleKey;                                                    //@synthesize bundleKey=_bundleKey - In the implementation block
@property (retain) AMSPromise * completionPromise;                                        //@synthesize completionPromise=_completionPromise - In the implementation block
@property (copy) NSDictionary * contentHashDictionary;                                    //@synthesize contentHashDictionary=_contentHashDictionary - In the implementation block
@property (copy) NSString * destinationPath;                                              //@synthesize destinationPath=_destinationPath - In the implementation block
@property (assign) long long downloadSize;                                                //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign) long long expectedDiskUsage;                                           //@synthesize expectedDiskUsage=_expectedDiskUsage - In the implementation block
@property (copy) NSDictionary * hashingData;                                              //@synthesize hashingData=_hashingData - In the implementation block
@property (retain) KeepAlive * keepAlive;                                                 //@synthesize keepAlive=_keepAlive - In the implementation block
@property (retain) NSString * logKey;                                                     //@synthesize logKey=_logKey - In the implementation block
@property (assign) BOOL storeBased;                                                       //@synthesize storeBased=_storeBased - In the implementation block
@property (assign) BOOL streamable;                                                       //@synthesize streamable=_streamable - In the implementation block
@property (retain) NSString * uniqueKey;                                                  //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (retain) AssetPromise * assetPromise;                                           //@synthesize assetPromise=_assetPromise - In the implementation block
@property (copy) NSUUID * coordinatorID;                                                  //@synthesize coordinatorID=_coordinatorID - In the implementation block
@property (getter=isDiscretionary) BOOL discretionary;                                    //@synthesize discretionary=_discretionary - In the implementation block
@property (readonly) NSString * downloadPath; 
@property (readonly) long long duplicateDownloadCount; 
@property (assign) BOOL hasRefreshed;                                                     //@synthesize hasRefreshed=_hasRefreshed - In the implementation block
@property (assign) double loadingPriority;                                                //@synthesize loadingPriority=_loadingPriority - In the implementation block
@property (readonly) IXPromisedOutOfBandTransfer * outOfBandTransferPromise; 
@property (assign) long long pinCount;                                                    //@synthesize pinCount=_pinCount - In the implementation block
@property (readonly) NSProgress * progress;                                               //@synthesize progress=_progress - In the implementation block
@property (retain) NSDate * requestStartDate;                                             //@synthesize requestStartDate=_requestStartDate - In the implementation block
@property (assign) BOOL shouldPin;                                                        //@synthesize shouldPin=_shouldPin - In the implementation block
@property (copy) NSURL * sourceURL;                                                       //@synthesize sourceURL=_sourceURL - In the implementation block
@property (retain) ODRTagsRequest * tagsRequest;                                          //@synthesize tagsRequest=_tagsRequest - In the implementation block
@property (assign) long long type;                                                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL useLocalCache;                                                    //@synthesize useLocalCache=_useLocalCache - In the implementation block
@property (assign) unsigned qosClass;                                                     //@synthesize qosClass=_qosClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)downloadWithAssetPack:(id)arg1 andManifest:(id)arg2 forApplication:(id)arg3 originatingLogKey:(id)arg4 ;
+(id)_logPrefixForPriority:(double)arg1 ;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(BOOL)isDiscretionary;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(double)loadingPriority;
-(void)setLoadingPriority:(double)arg1 ;
-(NSProgress *)progress;
-(NSDate *)requestStartDate;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
-(void)setExtractionProgress:(double)arg1 ;
-(void)setStreamable:(BOOL)arg1 ;
-(unsigned)qosClass;
-(void)setQosClass:(unsigned)arg1 ;
-(NSString *)downloadPath;
-(id)requestProperties;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(ODRApplication *)application;
-(void)setApplication:(ODRApplication *)arg1 ;
-(KeepAlive *)keepAlive;
-(id)extractor;
-(long long)downloadSize;
-(NSString *)destinationPath;
-(void)setDownloadSize:(long long)arg1 ;
-(void)setShouldPin:(BOOL)arg1 ;
-(BOOL)shouldPin;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)setKeepAlive:(KeepAlive *)arg1 ;
-(void)setRequestStartDate:(NSDate *)arg1 ;
-(BOOL)streamable;
-(NSUUID *)coordinatorID;
-(void)setCoordinatorID:(NSUUID *)arg1 ;
-(void)completeWithSuccess;
-(id)_streamingZipOptions;
-(AssetPromise *)assetPromise;
-(void)setAssetPromise:(AssetPromise *)arg1 ;
-(NSString *)bundleKey;
-(long long)pinCount;
-(void)setPinCount:(long long)arg1 ;
-(void)setTagsRequest:(ODRTagsRequest *)arg1 ;
-(void)setBundleKey:(NSString *)arg1 ;
-(void)setContentHashDictionary:(NSDictionary *)arg1 ;
-(void)setExpectedDiskUsage:(long long)arg1 ;
-(void)setHashingData:(NSDictionary *)arg1 ;
-(void)setStoreBased:(BOOL)arg1 ;
-(void)setUseLocalCache:(BOOL)arg1 ;
-(void)_validateSourceURL;
-(void)_completeCoordinatorPromise:(id)arg1 ;
-(BOOL)allowCellularAccess;
-(double)_simulatedDownloadTime;
-(void)_cancelSimulatedDownloadTimer;
-(id)_simulatedDownloadTimerWithInterval:(double)arg1 dispatchBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_getFileSizeAtURL:(id)arg1 ;
-(id)_calculateLocalURLForEmbeddedAssetPackWithKey:(id)arg1 error:(id*)arg2 ;
-(void)addDuplicateDownload:(id)arg1 ;
-(long long)duplicateDownloadCount;
-(IXPromisedOutOfBandTransfer *)outOfBandTransferPromise;
-(void)simulateDownloadForEmbeddedAssetWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)contentHashDictionary;
-(long long)expectedDiskUsage;
-(NSDictionary *)hashingData;
-(BOOL)hasRefreshed;
-(void)setHasRefreshed:(BOOL)arg1 ;
-(ODRTagsRequest *)tagsRequest;
-(BOOL)useLocalCache;
-(AMSPromise *)completionPromise;
-(void)setCompletionPromise:(AMSPromise *)arg1 ;
-(BOOL)storeBased;
@end

