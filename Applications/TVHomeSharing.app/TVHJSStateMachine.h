/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSObject.h>
#import <TVHomeSharing/TVHJSStateMachine.h>

@protocol TVHJSStateMachine <JSExport>
@required
-(void)activate;
-(void)deactivate;
-(void)registerHandlerForEventAndState:(id)arg1 :(id)arg2 :(id)arg3;
-(id)initWithName:(id)arg1 :(id)arg2;
-(void)registerHandlerForEventAndStates:(id)arg1 :(id)arg2 :(id)arg3;
-(void)registerDefaultHandlerForEvent:(id)arg1 :(id)arg2;
-(void)registerStateTransitionFromState:(id)arg1 :(id)arg2 :(id)arg3;
-(void)ignoreEventInState:(id)arg1 :(id)arg2;
-(void)executeCallbackAfterCurrentStateTransition:(id)arg1;
-(void)postEvent:(id)arg1 :(id)arg2;

@end


@class NSMutableArray, TVSStateMachine;

@interface TVHJSStateMachine : TVHJSObject <TVHJSStateMachine> {

	NSMutableArray* _eventHandlerIdentifiers;
	TVSStateMachine* _wrappedStateMachine;

}

@property (nonatomic,retain) NSMutableArray * eventHandlerIdentifiers;              //@synthesize eventHandlerIdentifiers=_eventHandlerIdentifiers - In the implementation block
@property (nonatomic,retain) TVSStateMachine * wrappedStateMachine;                 //@synthesize wrappedStateMachine=_wrappedStateMachine - In the implementation block
+(id)_handlerIdentifierWithEvent:(id)arg1 state:(id)arg2 ;
+(id)_defaultHandlerIdentifierWithEvent:(id)arg1 ;
+(id)_sanitizedString:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(id)initWithAppContext:(id)arg1 ;
-(NSMutableArray *)eventHandlerIdentifiers;
-(TVSStateMachine *)wrappedStateMachine;
-(id)_invokeEventHandlerWithIdentifier:(id)arg1 state:(id)arg2 eventInfo:(id)arg3 ;
-(void)registerHandlerForEventAndState:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)initWithName:(id)arg1 :(id)arg2 ;
-(void)registerHandlerForEventAndStates:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)registerDefaultHandlerForEvent:(id)arg1 :(id)arg2 ;
-(void)registerStateTransitionFromState:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)ignoreEventInState:(id)arg1 :(id)arg2 ;
-(void)executeCallbackAfterCurrentStateTransition:(id)arg1 ;
-(void)postEvent:(id)arg1 :(id)arg2 ;
-(void)setEventHandlerIdentifiers:(NSMutableArray *)arg1 ;
-(void)setWrappedStateMachine:(TVSStateMachine *)arg1 ;
@end

