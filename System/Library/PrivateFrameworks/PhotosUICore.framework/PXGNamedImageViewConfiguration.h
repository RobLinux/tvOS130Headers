/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>

@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying> {

	NSString* _imageName;
	long long _contentMode;

}

@property (nonatomic,copy) NSString * imageName;                 //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) long long contentMode;              //@synthesize contentMode=_contentMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
@end

