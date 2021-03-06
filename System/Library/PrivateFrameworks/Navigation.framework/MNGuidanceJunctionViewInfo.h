/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/NSSecureCoding.h>

@class NSUUID, NSArray;

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding> {

	NSUUID* _uniqueID;
	NSArray* _images;

}

@property (nonatomic,readonly) NSUUID * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * images;               //@synthesize images=_images - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSArray *)images;
-(id)initWithID:(id)arg1 images:(id)arg2 ;
@end

