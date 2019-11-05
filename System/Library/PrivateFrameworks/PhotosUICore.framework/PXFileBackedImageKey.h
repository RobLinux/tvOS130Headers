/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSURL;

@interface PXFileBackedImageKey : NSObject {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(NSURL *)url;
-(id)initWithUrl:(id)arg1 size:(CGSize)arg2 ;
@end

