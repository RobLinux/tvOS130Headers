/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLTile : NSObject {

	IOSurfaceRef _decodedSurface;
	CGRect _imageRect;
	id _tileId;
	BOOL _visible;

}
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
-(void)setTileId:(id)arg1 ;
-(id)tileId;
@end

