/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/NSSecureCoding.h>

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding> {

	unsigned long long _imageID;
	NSData* _imageData;

}

@property (nonatomic,readonly) unsigned long long imageID;              //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                      //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(unsigned long long)imageID;
-(void)setImageID:(unsigned long long)arg1 ;
@end
