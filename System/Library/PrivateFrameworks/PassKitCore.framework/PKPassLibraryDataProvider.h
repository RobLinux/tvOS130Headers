/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(BOOL)canAddPaymentPass;
-(id)passWithUniqueID:(id)arg1;
-(id)peerPaymentPassUniqueID;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(void)removePass:(id)arg1;
-(id)paymentPasses;

@end

