/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSAttributedString, CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSAttributedString * formattedAddressString; 
@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) BOOL isShippingEditable; 
+(long long)dataType;
-(id)errors;
-(NSAttributedString *)formattedAddressString;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)shippingAddress;
-(NSString *)shippingType;
-(BOOL)isShippingEditable;
-(id)_shippingName;
@end

