/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, NSString;

@interface StoreKitClientIdentity : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	BOOL _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	BOOL _hidesConfirmationDialogs;
	BOOL _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	BOOL _requiresAuthenticationForPayment;
	NSNumber* _storeIdentifier;
	NSNumber* _storeVersion;
	BOOL _sandboxed;
	BOOL _usesIdentityAttributes;
	NSString* _vendorIdentifier;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                             //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                      //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                           //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeVersion;                              //@synthesize storeVersion=_storeVersion - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                          //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                  //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) BOOL usesIdentityAttributes;                        //@synthesize usesIdentityAttributes=_usesIdentityAttributes - In the implementation block
@property (assign,nonatomic) BOOL allowsBootstrapCellularData;                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (assign,nonatomic) BOOL hidesConfirmationDialogs;                      //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) BOOL ignoresInAppPurchaseRestriction;               //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthenticationForPayment;              //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
+(void)initialize;
+(void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(NSNumber *)storeIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(BOOL)isSandboxed;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setHidesConfirmationDialogs:(BOOL)arg1 ;
-(void)setIgnoresInAppPurchaseRestriction:(BOOL)arg1 ;
-(void)setReceiptDirectoryPath:(NSString *)arg1 ;
-(void)setRequiresAuthenticationForPayment:(BOOL)arg1 ;
-(BOOL)hidesConfirmationDialogs;
-(BOOL)ignoresInAppPurchaseRestriction;
-(NSString *)receiptDirectoryPath;
-(BOOL)requiresAuthenticationForPayment;
-(BOOL)usesIdentityAttributes;
-(NSNumber *)storeVersion;
-(void)setStoreVersion:(NSNumber *)arg1 ;
-(void)setUsesIdentityAttributes:(BOOL)arg1 ;
-(void)setValuesWithSoftwareApplicationProxy:(id)arg1 ;
-(void)setValuesWithPaymentQueueClient:(id)arg1 ;
@end

