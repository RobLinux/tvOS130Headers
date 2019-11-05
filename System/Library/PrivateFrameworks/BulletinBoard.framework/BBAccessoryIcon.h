/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _imagesForContentSize;

}

@property (nonatomic,copy) NSDictionary * imagesForContentSize;              //@synthesize imagesForContentSize=_imagesForContentSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)imagesForContentSize;
-(void)setImagesForContentSize:(NSDictionary *)arg1 ;
-(void)addImage:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(id)imageForContentSizeCategory:(id)arg1 ;
@end

