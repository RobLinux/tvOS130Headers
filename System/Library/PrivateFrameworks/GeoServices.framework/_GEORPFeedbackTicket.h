/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <GeoServices/GEOMapServiceFeedbackReportTicket.h>

@protocol GEOMapItem;
@class GEOMapServiceTraits, NSData, GEORPFeedbackRequestParameters, GEORPFeedbackRequest, GEORPUserCredentials, NSString;

@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket> {

	NSData* _resubmissionData;
	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	id<GEOMapItem> _place;
	GEORPFeedbackRequest* _feedbackRequest;
	GEORPUserCredentials* _userCredentials;
	NSData* _pushToken;
	NSString* _emailAddress;
	BOOL _started;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(SCD_Struct_GE2)dataRequestKind;
-(id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
@end

