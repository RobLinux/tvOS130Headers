/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLMetricsReporter.h>

@class RTCSecureHierarchyToken, RTCReporting, PGManager, NSString;

@interface PLRTCMetricsReporter : NSObject <PLMetricsReporter> {

	RTCSecureHierarchyToken* _reportingSessionToken;
	RTCReporting* _reportingSession;
	PGManager* _graphManager;

}

@property (nonatomic,retain) PGManager * graphManager;                                     //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,retain) RTCSecureHierarchyToken * reportingSessionToken;              //@synthesize reportingSessionToken=_reportingSessionToken - In the implementation block
@property (nonatomic,retain) RTCReporting * reportingSession;                              //@synthesize reportingSession=_reportingSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(RTCReporting *)reportingSession;
-(void)reportMetricsEvents:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(RTCSecureHierarchyToken *)reportingSessionToken;
-(void)setReportingSessionToken:(RTCSecureHierarchyToken *)arg1 ;
-(void)setReportingSession:(RTCReporting *)arg1 ;
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
@end

