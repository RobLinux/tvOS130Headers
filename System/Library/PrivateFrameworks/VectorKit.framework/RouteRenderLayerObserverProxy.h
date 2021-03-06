/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolylineGroupOverlayObserver.h>

@class NSString;

@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {

	PolylineGroupChangeObserver* _polylineGroupObserver;
	vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >* _retainedGroups;
	set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> >* _observedGroupsSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didFocusPolyline:(id)arg2 ;
-(id)initWithPolylineGroupObserver:(PolylineGroupChangeObserver*)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
@end

