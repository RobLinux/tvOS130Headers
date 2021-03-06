/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSBlockOperation;

@interface CKKSLaunchSequence : NSObject {

	BOOL _firstLaunch;
	BOOL _launched;
	NSString* _name;
	NSMutableDictionary* _events;
	NSMutableDictionary* _attributes;
	NSBlockOperation* _launchOperation;
	NSMutableDictionary* _dependantLaunches;

}

@property (assign) BOOL launched;                                        //@synthesize launched=_launched - In the implementation block
@property (retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (retain) NSMutableDictionary * events;                         //@synthesize events=_events - In the implementation block
@property (retain) NSMutableDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSBlockOperation * launchOperation;                   //@synthesize launchOperation=_launchOperation - In the implementation block
@property (retain) NSMutableDictionary * dependantLaunches;              //@synthesize dependantLaunches=_dependantLaunches - In the implementation block
@property (assign) BOOL firstLaunch; 
-(id)eventsByTime;
-(void)setFirstLaunch:(BOOL)arg1 ;
-(id)initWithRocketName:(id)arg1 ;
-(BOOL)firstLaunch;
-(void)addDependantLaunch:(id)arg1 child:(id)arg2 ;
-(id)eventsRelativeTime;
-(void)setLaunchOperation:(NSBlockOperation *)arg1 ;
-(NSMutableDictionary *)dependantLaunches;
-(void)setDependantLaunches:(NSMutableDictionary *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(void)launch;
-(NSMutableDictionary *)events;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSBlockOperation *)launchOperation;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
-(BOOL)launched;
-(void)setLaunched:(BOOL)arg1 ;
-(void)reportMetric;
@end

