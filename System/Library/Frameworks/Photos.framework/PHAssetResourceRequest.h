/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHResourceAvailabilityChangeRequestDelegate.h>
#import <Photos/PHAssetResourceRequest.h>

@protocol PHAssetResourceRequestDelegate;
@class PHResourceAvailabilityJob, NSProgress, PHAssetResource, PHAssetResourceRequestOptions, NSDictionary, NSString;

@interface PHAssetResourceRequest : NSObject <PHResourceAvailabilityChangeRequestDelegate, PHAssetResourceRequest> {

	PHResourceAvailabilityJob* _availabilityJob;
	os_unfair_lock_s _lock;
	BOOL _cancelled;
	NSProgress* _availabilityProgress;
	NSProgress* _fileStreamProgress;
	NSProgress* _totalProgress;
	BOOL _loadURLOnly;
	int _requestID;
	PHAssetResource* _assetResource;
	PHAssetResourceRequestOptions* _options;
	unsigned long long _managerID;
	id<PHAssetResourceRequestDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSDictionary* _info;
	NSString* _taskIdentifier;
	/*^block*/id _dataHandler;

}

@property (nonatomic,copy) id dataHandler;                                                      //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL loadURLOnly;                                                  //@synthesize loadURLOnly=_loadURLOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAssetResource * assetResource;                                 //@synthesize assetResource=_assetResource - In the implementation block
@property (nonatomic,readonly) PHAssetResourceRequestOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int requestID;                                                   //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                    //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,__weak,readonly) id<PHAssetResourceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * info;                                             //@synthesize info=_info - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * taskIdentifier;                                           //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
+(id)_globalFileIOQueue;
-(PHAssetResourceRequestOptions *)options;
-(id<PHAssetResourceRequestDelegate>)delegate;
-(void)cancel;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(NSDictionary *)info;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(int)requestID;
-(void)startRequest;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)_setupProgressIfNeeded;
-(unsigned long long)managerID;
-(PHAssetResource *)assetResource;
-(id)initWithAssetResource:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(unsigned long long)arg4 delegate:(id)arg5 dataReceivedHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_initialValidationError;
-(void)_reportProgress;
-(void)_finishAsyncWithLocallyAvailableResourceAtURL:(id)arg1 ;
-(void)_streamDataAtURL:(id)arg1 dataHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateAssetResourceWithLocallyAvailable:(BOOL)arg1 fileURL:(id)arg2 ;
-(BOOL)loadURLOnly;
-(void)setLoadURLOnly:(BOOL)arg1 ;
@end

