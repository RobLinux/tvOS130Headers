/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCloudKitMirroringImportRequest, NSCloudKitMirroringExportRequest, NSCloudKitMirroringDelegateSetupRequest, NSCloudKitMirroringDelegateResetRequest, NSCloudKitMirroringResetZoneRequest, NSCloudKitMirroringFetchRecordsRequest, NSCloudKitMirroringResetMetadataRequest, NSCloudKitMirroringDelegateSerializationRequest, NSCloudKitMirroringInitializeSchemaRequest, NSCloudKitMirroringExportProgressRequest, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringRequestManager : NSObject {

	NSCloudKitMirroringImportRequest* _pendingImportRequest;
	NSCloudKitMirroringExportRequest* _pendingExportRequest;
	NSCloudKitMirroringDelegateSetupRequest* _pendingSetupRequest;
	NSCloudKitMirroringDelegateResetRequest* _pendingDelegateResetRequest;
	NSCloudKitMirroringResetZoneRequest* _pendingResetRequest;
	NSCloudKitMirroringFetchRecordsRequest* _pendingFetchRecordsRequest;
	NSCloudKitMirroringResetMetadataRequest* _pendingResetMetadataRequest;
	NSCloudKitMirroringDelegateSerializationRequest* _pendingSerializationRequest;
	NSCloudKitMirroringInitializeSchemaRequest* _pendingInitializeSchemaRequest;
	NSCloudKitMirroringExportProgressRequest* _pendingExportProgressRequest;
	NSCloudKitMirroringRequest* _activeRequest;

}

@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * pendingImportRequest;                                    //@synthesize pendingImportRequest=_pendingImportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportRequest * pendingExportRequest;                                    //@synthesize pendingExportRequest=_pendingExportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSetupRequest * pendingSetupRequest;                              //@synthesize pendingSetupRequest=_pendingSetupRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateResetRequest * pendingDelegateResetRequest;                      //@synthesize pendingDelegateResetRequest=_pendingDelegateResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetZoneRequest * pendingResetRequest;                                  //@synthesize pendingResetRequest=_pendingResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringFetchRecordsRequest * pendingFetchRecordsRequest;                        //@synthesize pendingFetchRecordsRequest=_pendingFetchRecordsRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetMetadataRequest * pendingResetMetadataRequest;                      //@synthesize pendingResetMetadataRequest=_pendingResetMetadataRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringRequest * activeRequest;                                                 //@synthesize activeRequest=_activeRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSerializationRequest * pendingSerializationRequest;              //@synthesize pendingSerializationRequest=_pendingSerializationRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringInitializeSchemaRequest * pendingInitializeSchemaRequest;                //@synthesize pendingInitializeSchemaRequest=_pendingInitializeSchemaRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportProgressRequest * pendingExportProgressRequest;                    //@synthesize pendingExportProgressRequest=_pendingExportProgressRequest - In the implementation block
-(void)dealloc;
-(id)duplicateRequestErrorForRequest:(id)arg1 ;
-(BOOL)enqueueRequest:(id)arg1 error:(id*)arg2 ;
-(id)dequeueNextRequest;
-(void)requestFinished:(id)arg1 ;
-(id)dequeueAllPendingRequests;
-(NSCloudKitMirroringImportRequest *)pendingImportRequest;
-(NSCloudKitMirroringExportRequest *)pendingExportRequest;
-(NSCloudKitMirroringDelegateSetupRequest *)pendingSetupRequest;
-(NSCloudKitMirroringDelegateResetRequest *)pendingDelegateResetRequest;
-(NSCloudKitMirroringResetZoneRequest *)pendingResetRequest;
-(NSCloudKitMirroringFetchRecordsRequest *)pendingFetchRecordsRequest;
-(NSCloudKitMirroringResetMetadataRequest *)pendingResetMetadataRequest;
-(NSCloudKitMirroringDelegateSerializationRequest *)pendingSerializationRequest;
-(NSCloudKitMirroringInitializeSchemaRequest *)pendingInitializeSchemaRequest;
-(NSCloudKitMirroringExportProgressRequest *)pendingExportProgressRequest;
-(NSCloudKitMirroringRequest *)activeRequest;
@end

