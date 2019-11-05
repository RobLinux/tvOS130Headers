/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSMutableSet, NSNumber;

@interface MicroPaymentClient : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * lastQueueCheckDate; 
@property (nonatomic,retain) NSMutableSet * payments; 
@property (nonatomic,retain) NSNumber * sandboxed; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (nonatomic,retain) NSNumber * storeIdentifier; 
@property (nonatomic,retain) NSNumber * storeVersion; 
@property (nonatomic,retain) NSString * vendorIdentifier; 
@property (nonatomic,retain) NSNumber * usesIdentityAttributes; 
@property (nonatomic,retain) NSNumber * allowsBootstrapCellularData; 
@property (nonatomic,retain) NSNumber * hidesConfirmationDialogs; 
@property (nonatomic,retain) NSNumber * ignoresInAppPurchaseRestriction; 
@property (nonatomic,retain) NSString * receiptDirectoryPath; 
@property (nonatomic,retain) NSNumber * requiresAuthenticationForPayment; 
+(id)entityForContext:(id)arg1 ;
-(id)mergeResponse:(id)arg1 withOptions:(long long)arg2 ;
-(id)replacePayment:(id)arg1 withPurchaseResponse:(id)arg2 ;
-(void)setValuesWithClientIdentity:(id)arg1 ;
@end

