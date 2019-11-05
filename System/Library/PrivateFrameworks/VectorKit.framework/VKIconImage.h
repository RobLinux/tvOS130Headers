/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKIconImage : NSObject {

	shared_ptr<grl::IconImage>* _iconImage;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _fillColor;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _haloColor;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _glyphColor;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _calloutFillColor;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _calloutHaloColor;
	retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf>* _calloutTextColor;

}
-(CGImageRef)image;
-(float)opacity;
-(CGColorRef)fillColor;
-(CGSize)imageSize;
-(id)init:(shared_ptr<grl::IconImage>*)arg1 ;
-(CGColorRef)glyphColor;
-(float)contentScale;
-(CGColorRef)haloColor;
-(CGColorRef)calloutFillColor;
-(CGColorRef)calloutHaloColor;
-(CGColorRef)calloutTextColor;
-(unsigned)calloutShape;
-(BOOL)isBalloonShape;
@end

