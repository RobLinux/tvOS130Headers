/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DATransactionMonitorDelegate;
@class NSMutableArray;

@interface DATransactionMonitor : NSObject {

	int _transactionCount;
	NSMutableArray* _transactions;
	id<DATransactionMonitorDelegate> _transactionMonitorDelegate;

}

@property (assign,nonatomic) int transactionCount;                                                            //@synthesize transactionCount=_transactionCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactions;                                                   //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic,__weak) id<DATransactionMonitorDelegate> transactionMonitorDelegate;              //@synthesize transactionMonitorDelegate=_transactionMonitorDelegate - In the implementation block
+(id)sharedTransactionMonitor;
-(id)init;
-(int)transactionCount;
-(void)setTransactionCount:(int)arg1 ;
-(NSMutableArray *)transactions;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(void)incrementTransactionCountForTransaction:(id)arg1 ;
-(void)decrementTransactionCountForTransaction:(id)arg1 ;
-(id<DATransactionMonitorDelegate>)transactionMonitorDelegate;
-(void)setTransactionMonitorDelegate:(id<DATransactionMonitorDelegate>)arg1 ;
@end

