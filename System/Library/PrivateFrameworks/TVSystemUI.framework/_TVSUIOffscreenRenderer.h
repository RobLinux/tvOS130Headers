/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVSystemUI/TVSystemUI-Structs.h>
@class _TVSUIOffscreenRendererFormat, CARenderer;

@interface _TVSUIOffscreenRenderer : NSObject {

	_TVSUIOffscreenRendererFormat* _format;
	CARenderer* _renderer;
	IOSurfaceRef _ioSurface;
	BOOL _cachesResources;
	BOOL _useSoftwareRenderer;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) _TVSUIOffscreenRendererFormat * format; 
@property (nonatomic,readonly) BOOL cachesResources;                                     //@synthesize cachesResources=_cachesResources - In the implementation block
@property (assign,nonatomic) BOOL useSoftwareRenderer;                                   //@synthesize useSoftwareRenderer=_useSoftwareRenderer - In the implementation block
-(id)init;
-(void)dealloc;
-(CGSize)size;
-(_TVSUIOffscreenRendererFormat *)format;
-(void)_purgeResources;
-(void)_createResourcesIfNeeded;
-(id)imageWithLayerTree:(id)arg1 ;
-(id)_imageWithLayerTree:(id)arg1 ;
-(BOOL)useSoftwareRenderer;
-(id)_rendererWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 format:(id)arg2 cachesResources:(BOOL)arg3 ;
-(id)imageWithViewHierarchy:(/*^block*/id)arg1 ;
-(void)preheatResources;
-(BOOL)cachesResources;
-(void)setUseSoftwareRenderer:(BOOL)arg1 ;
@end

