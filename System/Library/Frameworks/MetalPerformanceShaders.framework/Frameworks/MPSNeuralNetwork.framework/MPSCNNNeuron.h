/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer;
@class NSData;

@interface MPSCNNNeuron : MPSCNNKernel {

	int _neuronType;
	float _a;
	float _b;
	float _c;
	NSData* _data;
	BOOL _noCopy;
	unsigned long long _count;
	id<MTLBuffer> _aBuf;

}

@property (nonatomic,readonly) int neuronType;                    //@synthesize neuronType=_neuronType - In the implementation block
@property (a,nonatomic,readonly) float a;                         //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) float b;                         //@synthesize b=_b - In the implementation block
@property (c,nonatomic,readonly) float c;                         //@synthesize c=_c - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)dealloc;
-(float)c;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(int)neuronType;
-(float)a;
-(float)b;
-(id)initWithDevice:(id)arg1 neuronDescriptor:(id)arg2 ;
-(void)initializeWithNeuronType:(int)arg1 neuronParameterA:(float)arg2 neuronParameterB:(float)arg3 neuronParameterC:(float)arg4 ;
-(void)initializeWithNeuronType:(int)arg1 neuronParameterA:(const float*)arg2 count:(unsigned long long)arg3 ;
-(id)privateInitWithDevice:(id)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 type:(int)arg5 ;
-(id)privateInitWithDevice:(id)arg1 a:(const float*)arg2 count:(unsigned long long)arg3 type:(int)arg4 ;
@end

