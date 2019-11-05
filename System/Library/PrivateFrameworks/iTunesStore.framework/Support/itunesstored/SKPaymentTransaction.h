/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <itunesstored/itunesstored-Structs.h>
@class NSString, NSError, SKPayment, NSArray, NSDate, NSData;

@interface SKPaymentTransaction : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,readonly) NSString * _transactionIdentifier; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) SKPaymentTransaction * originalTransaction; 
@property (nonatomic,readonly) SKPayment * payment; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSDate * transactionDate; 
@property (nonatomic,readonly) NSString * transactionIdentifier; 
@property (nonatomic,readonly) NSData * transactionReceipt; 
@property (nonatomic,readonly) long long transactionState; 
-(OpaqueJSValueRef)jsCopyObjectWithContext:(OpaqueJSContextRef)arg1 withException:(const OpaqueJSValue*)arg2 ;
-(id)init;
-(NSError *)error;
-(id)UUID;
-(void)_setError:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)downloads;
-(NSString *)transactionIdentifier;
-(NSDate *)transactionDate;
-(NSString *)_transactionIdentifier;
-(SKPayment *)payment;
-(id)initWithPayment:(id)arg1 ;
-(long long)transactionState;
-(NSString *)matchingIdentifier;
-(BOOL)mergeWithServerTransaction:(id)arg1 ;
-(id)initWithServerTransaction:(id)arg1 ;
-(BOOL)canMergeWithTransaction:(id)arg1 ;
-(BOOL)mergeWithTransaction:(id)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1 ;
-(SKPaymentTransaction *)originalTransaction;
-(NSData *)transactionReceipt;
-(void)_setOriginalTransaction:(id)arg1 ;
-(void)_setTemporaryIdentifier:(id)arg1 ;
-(void)_setTransactionDate:(id)arg1 ;
-(void)_setTransactionIdentifier:(id)arg1 ;
-(void)_setTransactionReceipt:(id)arg1 ;
-(void)_setTransactionState:(long long)arg1 ;
@end

