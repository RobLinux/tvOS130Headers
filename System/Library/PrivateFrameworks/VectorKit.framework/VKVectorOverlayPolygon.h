/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKVectorOverlayPolygon : NSObject {

	shared_ptr<geo::Polygon2<double> >* _geometry;
	Range<signed char> _worldIndexes;

}

@property (nonatomic,readonly) Range<signed char> worldIndexes;                                            //@synthesize worldIndexes=_worldIndexes - In the implementation block
@property (getter=_geometry,nonatomic,readonly) shared_ptr<geo::Polygon2<double> >* geometry;              //@synthesize geometry=_geometry - In the implementation block
-(shared_ptr<geo::Polygon2<double> >*)_geometry;
-(Range<signed char>)worldIndexes;
-(id)initWithMapPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
@end

