/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/NSCopying.h>
#import <HomeKit/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HMSelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;
	NSString* _localizedTitle;

}

@property (copy,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)title;
-(NSString *)localizedTitle;
@end

