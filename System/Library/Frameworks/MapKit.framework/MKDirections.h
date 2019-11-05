/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKLocationManagerOperation, OS_dispatch_group;
@class MKDirectionsRequest, GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, NSObject;

@interface MKDirections : NSObject {

	MKDirectionsRequest* _request;
	GEODirectionsRequest* _geoRequest;
	GEOQuickETARequest* _etaRequest;
	GEOQuickETARequester* _etaRequester;
	id<MKLocationManagerOperation> _locationOperation;
	NSObject*<OS_dispatch_group> _waypointsDispatchGroup;

}

@property (getter=isCalculating,nonatomic,readonly) BOOL calculating; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)calculateETAWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cleanupLocationOperation;
-(BOOL)isCalculating;
-(void)_establishCurrentLocationAndThen:(/*^block*/id)arg1 ;
-(void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)arg1 traits:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_calculateETAWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)calculateDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

