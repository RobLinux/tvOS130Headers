/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	BOOL _isDeleted;
	/*^block*/id _recordVersionsFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSMutableDictionary* _recordIDByRequestID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                  //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                          //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                         //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,copy) id recordVersionsFetchedBlock;                            //@synthesize recordVersionsFetchedBlock=_recordVersionsFetchedBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                           //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
-(BOOL)isDeleted;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(int)operationType;
-(NSArray *)recordIDs;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3 ;
-(void)setRecordVersionsFetchedBlock:(id)arg1 ;
-(id)recordVersionsFetchedBlock;
@end

