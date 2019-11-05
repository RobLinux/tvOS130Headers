/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying> {

	long long __userInterfaceStyle;
	CGSize __imageSize;

}

@property (nonatomic,readonly) CGSize _imageSize;                          //@synthesize _imageSize=__imageSize - In the implementation block
@property (nonatomic,readonly) long long _userInterfaceStyle;              //@synthesize _userInterfaceStyle=__userInterfaceStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)_imageSize;
-(long long)_userInterfaceStyle;
-(id)initWithImageSize:(CGSize)arg1 userInterfaceStyle:(long long)arg2 ;
@end

