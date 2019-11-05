/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSFastEnumeration.h>

@class _MKSpatialColliderPairSet;

@interface MKSpatialCollider : NSObject <NSFastEnumeration> {

	long long _options;
	_MKSpatialColliderPairSet* _previousCollisionPairs;
	_MKSpatialColliderPairSet* _registeredCollisonPairs;
	BOOL _isVertical;
	vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> >* _sortedAnnotationViews;
	double _maxLength;
	unsigned long long mutator;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MK33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)viewCount;
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 fromIndex:(long long)arg3 length:(double)arg4 ;
-(id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3 ;
-(id)annotationViewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)insertAnnotationView:(id)arg1 ;
-(id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 ;
-(id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1 ;
-(id)registeredCollissions;
@end

