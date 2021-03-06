/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportGetStreamingURLTask.h>

@class CPLCloudKitScope, CPLResource, NSDictionary, CPLCloudKitSimpleCache, NSString;

@interface CPLCloudKitGetStreamingURLTask : CPLCloudKitTransportTask <CPLEngineTransportGetStreamingURLTask> {

	CPLCloudKitScope* _scope;
	CPLResource* _resource;
	NSDictionary* _hints;
	CPLCloudKitSimpleCache* _cache;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CPLResource * resource;                                                 //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSDictionary * hints;                                                   //@synthesize hints=_hints - In the implementation block
@property (nonatomic,readonly) CPLCloudKitSimpleCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(CPLCloudKitSimpleCache *)cache;
-(id)completionHandler;
-(CPLResource *)resource;
-(NSDictionary *)hints;
-(void)runOperations;
-(id)_streamOperationForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithController:(id)arg1 resource:(id)arg2 hints:(id)arg3 transportScope:(id)arg4 cache:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

