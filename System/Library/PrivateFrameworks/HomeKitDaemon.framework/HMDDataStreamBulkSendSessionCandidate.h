/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDDataStreamBulkSendSessionCandidate.h>

@protocol HMDDataStreamBulkSendSessionCandidate
@required
-(void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;
-(void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(/*^block*/id)arg2;

@end


@class HMDDataStreamBulkSendProtocol, NSDictionary, NSMutableArray, NSError;

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate> {

	HMDDataStreamBulkSendProtocol* _bulkSendProtocol;
	NSDictionary* _requestHeader;
	NSMutableArray* _pendingReads;
	NSError* _receivedFailure;

}

@property (nonatomic,__weak,readonly) HMDDataStreamBulkSendProtocol * bulkSendProtocol;              //@synthesize bulkSendProtocol=_bulkSendProtocol - In the implementation block
@property (nonatomic,readonly) NSDictionary * requestHeader;                                         //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReads;                                          //@synthesize pendingReads=_pendingReads - In the implementation block
@property (nonatomic,retain) NSError * receivedFailure;                                              //@synthesize receivedFailure=_receivedFailure - In the implementation block
-(NSMutableArray *)pendingReads;
-(void)setPendingReads:(NSMutableArray *)arg1 ;
-(void)rejectBulkSendSessionWithStatus:(unsigned short)arg1 ;
-(void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithProtocol:(id)arg1 requestHeader:(id)arg2 ;
-(NSDictionary *)requestHeader;
-(NSError *)receivedFailure;
-(HMDDataStreamBulkSendProtocol *)bulkSendProtocol;
-(void)setReceivedFailure:(NSError *)arg1 ;
@end

