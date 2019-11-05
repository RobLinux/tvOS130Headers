/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3907.appex/Diagnostic-3907
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Arcade/DKDiagnosticInputs.h>

@class NSArray, NSString;

@interface AccessoryPresenceInputs : NSObject <DKDiagnosticInputs> {

	NSArray* _modelNumbers;
	unsigned long long _timeout;
	NSString* _identifier;

}

@property (nonatomic,retain) NSArray * modelNumbers;                  //@synthesize modelNumbers=_modelNumbers - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)timeout;
-(BOOL)validateAndInitializePredicates:(id)arg1 ;
-(BOOL)validateAndInitializeParameters:(id)arg1 ;
-(void)setModelNumbers:(NSArray *)arg1 ;
-(NSArray *)modelNumbers;
@end

