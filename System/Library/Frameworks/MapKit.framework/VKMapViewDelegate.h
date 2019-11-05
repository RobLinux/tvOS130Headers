/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayer:(id)arg1 venueWithFocusDidChange:(id)arg2 building:(id)arg3;
-(void)mapLayer:(id)arg1 willTransitionTo:(long long)arg2;
-(void)mapLayer:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapLayerWillStartFlyoverTour:(id)arg1;
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapLayerDidReloadStylesheet:(id)arg1;
-(void)mapLayerDidChangeSceneState:(id)arg1 withState:(unsigned long long)arg2;
-(void)mapLayerLabelsDidLayout:(id)arg1;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 labelMarkerDidChangeState:(id)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerDidChangeState:(id)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(SCD_Struct_MK2)arg2;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
-(void)mapLayerDidEnterAR:(id)arg1;
-(void)mapLayer:(id)arg1 didEncounterARError:(id)arg2;
-(void)mapLayer:(id)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
-(void)mapLayerARSessionInterruptionEnded:(id)arg1;
-(void)mapLayer:(id)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
-(void)mapLayerWillEnterAR:(id)arg1;
-(void)mapLayerWillExitAR:(id)arg1;
-(void)mapLayerDidExitAR:(id)arg1;
-(void)mapLayer:(id)arg1 flyoverModeWillChange:(int)arg2;

@end

