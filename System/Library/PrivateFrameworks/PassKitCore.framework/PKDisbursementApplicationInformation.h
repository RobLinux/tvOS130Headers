/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSData;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding> {

	NSString* _vendorName;
	NSString* _itemName;
	NSData* _iconData;

}

@property (nonatomic,copy) NSString * vendorName;              //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSString * itemName;                //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSData * iconData;                  //@synthesize iconData=_iconData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)vendorName;
-(void)setIconData:(NSData *)arg1 ;
-(NSData *)iconData;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)itemName;
-(id)initWithVendorName:(id)arg1 itemName:(id)arg2 iconData:(id)arg3 ;
@end

