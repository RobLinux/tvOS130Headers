/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, RTCReporting, RTCSecureHierarchyToken;

@interface PKAnalyticsReporter : NSObject {

	NSData* _archivedSessionToken;
	RTCReporting* _session;
	RTCSecureHierarchyToken* _sessionToken;
	os_unfair_lock_s _lockArchive;

}
+(id)subjectToReportDashboardAnalyticsForPass:(id)arg1 ;
+(void)subject:(id)arg1 sendEvent:(id)arg2 ;
+(id)subjectToReportDashboardAnalyticsForAccount:(id)arg1 ;
+(void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2 ;
+(id)subjectDictionary;
+(id)reporterForSubject:(id)arg1 ;
+(void)beginSubjectReporting:(id)arg1 ;
+(void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2 ;
+(void)endSubjectReporting:(id)arg1 ;
+(void)subjects:(id)arg1 sendEvent:(id)arg2 ;
+(void)sendSingularEvent:(id)arg1 ;
+(id)archivedSessionTokenForSubject:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(id)initWithSubject:(id)arg1 ;
-(id)initWithArchivedParent:(id)arg1 subject:(id)arg2 ;
-(id)archivedSessionToken;
-(id)initWithParentToken:(id)arg1 subject:(id)arg2 ;
-(id)initWithParent:(id)arg1 subject:(id)arg2 ;
@end

