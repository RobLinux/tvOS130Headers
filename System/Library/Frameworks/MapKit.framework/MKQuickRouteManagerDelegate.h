/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKQuickRouteManagerDelegate <NSObject>
@optional
-(unsigned long long)preferredDirectionsTypeForQuickRoute;

@required
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(BOOL)quickRouteShouldOnlyUseAutomobile;

@end

