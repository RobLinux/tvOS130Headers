/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, PKPaymentTransactionGroup;

@interface PKBalanceSummary : NSObject {

	BOOL _isLoading;
	unsigned long long _summaryType;
	NSDate* _startDate;
	NSDate* _endDate;
	PKPaymentTransactionGroup* _orderedSpendingTransactions;
	PKPaymentTransactionGroup* _orderedInterestCharges;
	PKPaymentTransactionGroup* _orderedCredits;
	PKPaymentTransactionGroup* _rewards;

}

@property (assign,nonatomic) unsigned long long summaryType;                                       //@synthesize summaryType=_summaryType - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                                       //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * orderedSpendingTransactions;              //@synthesize orderedSpendingTransactions=_orderedSpendingTransactions - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * orderedInterestCharges;                   //@synthesize orderedInterestCharges=_orderedInterestCharges - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * orderedCredits;                           //@synthesize orderedCredits=_orderedCredits - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * rewards;                                  //@synthesize rewards=_rewards - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(PKPaymentTransactionGroup *)rewards;
-(void)setRewards:(PKPaymentTransactionGroup *)arg1 ;
-(unsigned long long)summaryType;
-(void)setSummaryType:(unsigned long long)arg1 ;
-(PKPaymentTransactionGroup *)orderedSpendingTransactions;
-(PKPaymentTransactionGroup *)orderedCredits;
-(PKPaymentTransactionGroup *)orderedInterestCharges;
-(void)setOrderedSpendingTransactions:(PKPaymentTransactionGroup *)arg1 ;
-(void)setOrderedInterestCharges:(PKPaymentTransactionGroup *)arg1 ;
-(void)setOrderedCredits:(PKPaymentTransactionGroup *)arg1 ;
@end

