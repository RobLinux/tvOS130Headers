/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPaymentTransaction, PKMerchant, NSString, NSArray;

@interface PKPaymentTransactionCellControllerIconRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKMerchant* _merchant;
	NSString* _cacheKey;
	NSArray* _completionHandlers;
	CGSize _size;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                           //@synthesize merchant=_merchant - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                             //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) NSArray * completionHandlers;                    //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(PKPaymentTransaction *)transaction;
-(NSString *)cacheKey;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(PKMerchant *)merchant;
-(NSArray *)completionHandlers;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
@end

