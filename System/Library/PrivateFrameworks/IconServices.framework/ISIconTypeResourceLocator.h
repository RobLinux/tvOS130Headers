/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/ISIconResourceLocator.h>
#import <IconServices/NSSecureCoding.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding> {

	NSString* _type;

}

@property (readonly) NSString * type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(id)bundleIdentifier;
-(BOOL)allowLocalizedIcon;
-(id)preferedResourceName;
-(id)resourceDirectoryURL;
@end

