/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationServiceObserver <NSObject>
@optional
-(void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)navigationServiceWillPause:(id)arg1;
-(void)navigationServiceWillResumeFromPause:(id)arg1;
-(void)navigationService:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationServiceDidSynchronize:(id)arg1;
-(void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)navigationService:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)navigationService:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
-(void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
-(void)navigationServiceBeginGuidanceUpdate:(id)arg1;
-(void)navigationServiceEndGuidanceUpdate:(id)arg1;
-(void)navigationService:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)navigationService:(id)arg1 usePersistentDisplay:(BOOL)arg2;
-(void)navigationService:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)navigationServiceDidEnterPreArrivalState:(id)arg1;
-(void)navigationServiceDidArrive:(id)arg1;
-(void)navigationServicePredictingDidArrive:(id)arg1;
-(void)navigationService:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
-(void)navigationService:(id)arg1 showLaneDirections:(id)arg2;
-(void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)navigationService:(id)arg1 showJunctionView:(id)arg2;
-(void)navigationService:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)navigationService:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)navigationService:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
-(void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)navigationService:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)navigationServiceDidHideSecondaryStep:(id)arg1;
-(void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
-(void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)navigationService:(id)arg1 didUpdateETAResponse:(id)arg2 forRoute:(id)arg3;
-(void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2;
-(void)navigationService:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
-(void)navigationService:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
-(void)navigationService:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
-(void)navigationServiceWillReroute:(id)arg1;
-(void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
-(void)navigationServiceDidCancelReroute:(id)arg1;
-(void)navigationService:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
-(void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;
-(void)navigationService:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
-(void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;
-(void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
-(void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
-(void)navigationService:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
-(void)navigationService:(id)arg1 didUpdatePredictedCommuteDestination:(id)arg2;
-(void)navigationService:(id)arg1 didStartRecordingTraceWithPath:(id)arg2;
-(void)navigationService:(id)arg1 didFinishLoadingTrace:(id)arg2;
-(void)navigationServiceDidPauseTrace:(id)arg1;
-(void)navigationServiceDidResumeTrace:(id)arg1;
-(void)navigationService:(id)arg1 didPlayTracePosition:(double)arg2;
-(void)navigationService:(id)arg1 didSeekToTracePosition:(double)arg2;
-(void)navigationService:(id)arg1 didRecordTraceBookmarkWithID:(unsigned long long)arg2;
-(void)navigationService:(id)arg1 didActivateAudioSession:(BOOL)arg2;
-(void)navigationService:(id)arg1 didStartSpeakingPrompt:(id)arg2;
-(void)navigationService:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
-(void)navigationService:(id)arg1 didChangeVolume:(unsigned long long)arg2;
-(void)navigationService:(id)arg1 triggerHaptics:(int)arg2;
-(void)navigationService:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;
-(void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
-(void)navigationServiceDidDetectInterfaceMismatch:(id)arg1;

@end

