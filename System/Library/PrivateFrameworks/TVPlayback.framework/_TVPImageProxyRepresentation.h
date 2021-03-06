/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPImageRepresentation.h>

@class TVImageProxy;

@interface _TVPImageProxyRepresentation : TVPImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(void)dealloc;
-(CGImageRef)_originalImage;
-(id)initWithImageProxy:(id)arg1 ;
-(id)_originalImageCacheKey;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

