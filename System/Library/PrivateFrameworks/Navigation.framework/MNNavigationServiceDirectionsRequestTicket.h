/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, MNNavigationClientProxy, MNDirectionsRequestDetails, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData;

@interface MNNavigationServiceDirectionsRequestTicket : NSObject {

	NSUUID* _requestIdentifier;
	MNNavigationClientProxy* _proxy;
	MNDirectionsRequestDetails* _request;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	MNTraceRecordingData* _traceRecordingData;

}

@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) MNTraceRecordingData * traceRecordingData;               //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
-(void)cancel;
-(GEODirectionsResponse *)directionsResponse;
-(GEODirectionsRequest *)directionsRequest;
-(MNTraceRecordingData *)traceRecordingData;
-(id)initWithProxy:(id)arg1 request:(id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
@end

