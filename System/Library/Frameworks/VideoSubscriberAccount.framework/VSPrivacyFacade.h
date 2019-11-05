/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/VSPrivacyServiceProtocol.h>

@class VSPrivacyVoucherLockbox, NSString, NSOperationQueue, NSArray;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol> {

	VSPrivacyVoucherLockbox* _voucherLockbox;
	NSString* _service;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSPrivacyVoucherLockbox * voucherLockbox;              //@synthesize voucherLockbox=_voucherLockbox - In the implementation block
@property (nonatomic,copy) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                       //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownAppBundles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)reset;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessForAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 identityProviderID:(id)arg5 allowUI:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)initWithService:(id)arg1 voucherLockbox:(id)arg2 ;
-(VSPrivacyVoucherLockbox *)voucherLockbox;
-(id)_voucherForProcess:(int)arg1 providerID:(id)arg2 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(SCD_Struct_VS3)arg2 ;
-(void)_promptForAccessUsingAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithVoucherLockbox:(id)arg1 ;
-(BOOL)isAccessGrantedForAuditToken:(SCD_Struct_VS3)arg1 ;
-(BOOL)isAccessGrantedForBundle:(CFBundleRef)arg1 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forBundle:(CFBundleRef)arg2 ;
-(NSArray *)knownAppBundles;
-(void)setVoucherLockbox:(VSPrivacyVoucherLockbox *)arg1 ;
@end

