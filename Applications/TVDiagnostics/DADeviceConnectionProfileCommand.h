/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVDiagnostics/DADeviceConnectionCommand.h>

@class NSArray, ASTProfileResult, NSString;

@interface DADeviceConnectionProfileCommand : NSObject <DADeviceConnectionCommand> {

	NSArray* _components;
	ASTProfileResult* _profile;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSArray * components;                    //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) ASTProfileResult * profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) id completion;                             //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long commandType; 
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSArray *)components;
-(ASTProfileResult *)profile;
-(void)setComponents:(NSArray *)arg1 ;
-(void)setProfile:(ASTProfileResult *)arg1 ;
-(long long)commandType;
@end

