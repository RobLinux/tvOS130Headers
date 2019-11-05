/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest {

	/*^block*/id _shareAcceptedBlock;
	NSArray* _shareMetadatasToAccept;
	NSMutableDictionary* _shareMetadataByRequestID;

}

@property (nonatomic,retain) NSArray * shareMetadatasToAccept;                            //@synthesize shareMetadatasToAccept=_shareMetadatasToAccept - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadataByRequestID;              //@synthesize shareMetadataByRequestID=_shareMetadataByRequestID - In the implementation block
@property (nonatomic,copy) id shareAcceptedBlock;                                         //@synthesize shareAcceptedBlock=_shareAcceptedBlock - In the implementation block
-(int)operationType;
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(NSArray *)shareMetadatasToAccept;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSMutableDictionary *)shareMetadataByRequestID;
-(id)shareAcceptedBlock;
-(id)initWithShareMetadatasToAccept:(id)arg1 ;
-(void)setShareAcceptedBlock:(id)arg1 ;
-(void)setShareMetadataByRequestID:(NSMutableDictionary *)arg1 ;
@end

