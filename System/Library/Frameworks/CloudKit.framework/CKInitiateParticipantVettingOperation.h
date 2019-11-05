/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperation : CKOperation {

	/*^block*/id _participantVettingInitiatedBlock;
	/*^block*/id _participantVettingInitiationCompletionBlock;
	CKShareMetadata* _shareMetadata;
	NSString* _participantID;
	NSString* _address;

}

@property (nonatomic,retain) CKShareMetadata * shareMetadata;                           //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                    //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * address;                                          //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) id participantVettingInitiatedBlock;                         //@synthesize participantVettingInitiatedBlock=_participantVettingInitiatedBlock - In the implementation block
@property (nonatomic,copy) id participantVettingInitiationCompletionBlock;              //@synthesize participantVettingInitiationCompletionBlock=_participantVettingInitiationCompletionBlock - In the implementation block
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(void)setParticipantVettingInitiatedBlock:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3 ;
-(void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(/*^block*/id)arg3 participantVettingInitiationCompletionBlock:(/*^block*/id)arg4 ;
-(void)setParticipantVettingInitiationCompletionBlock:(id)arg1 ;
-(id)participantVettingInitiatedBlock;
-(id)participantVettingInitiationCompletionBlock;
@end

