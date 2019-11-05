/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CKDatabase, CKRecordZone, PFCloudKitStoreMonitor, NSCloudKitMirroringDelegateOptions, NSObject, NSURL;

@interface PFCloudKitImporterOptions : NSObject {

	CKDatabase* _database;
	CKRecordZone* _recordZone;
	PFCloudKitStoreMonitor* _monitor;
	NSCloudKitMirroringDelegateOptions* _options;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSURL* _assetStorageURL;

}

@property (nonatomic,readonly) CKDatabase * database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                 //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) PFCloudKitStoreMonitor * monitor;                          //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSURL * assetStorageURL;                                   //@synthesize assetStorageURL=_assetStorageURL - In the implementation block
-(id)copy;
-(void)dealloc;
-(NSCloudKitMirroringDelegateOptions *)options;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(PFCloudKitStoreMonitor *)monitor;
-(CKDatabase *)database;
-(CKRecordZone *)recordZone;
-(NSURL *)assetStorageURL;
-(id)initWithOptions:(id)arg1 monitor:(id)arg2 assetStorageURL:(id)arg3 workQueue:(id)arg4 zone:(id)arg5 andDatabase:(id)arg6 ;
@end

