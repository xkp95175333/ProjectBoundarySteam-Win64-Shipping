// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {

	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xaf7000
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents, struct TArray<struct FColor> Colors); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf6b30
	void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents, struct TArray<struct FLinearColor> Colors); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf6810
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UVs, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xaf6550
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Vertices, struct TArray<struct FVector2D> UVs, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf5b50
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t> Triangles); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf59e0
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Vertices, struct TArray<struct FVector2D> UVs, struct TArray<struct FVector2D> UV1s, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf5740
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xaf55f0
	void ConvertQuadToTriangles(struct TArray<int32_t> Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf5440
	void CalculateTangentsForMesh(struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector2D> UVs, struct TArray<struct FVector> Normals, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xaf5130
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x4d0 (Inherited: 0x470)
struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x470(0x01)
	bool bUseAsyncCooking; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x478(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x480(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x490(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x4a0(0x1c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x4c0(0x10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf7510
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf7250
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible // (Final|Native|Public|BlueprintCallable) // @ game+0xaf6f30
	bool IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xaf6e90
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xaf67e0
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf60e0
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xaf5d80
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection // (Final|Native|Public|BlueprintCallable) // @ game+0xaf53b0
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0xaf5390
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections // (Final|Native|Public|BlueprintCallable) // @ game+0xaf5370
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xaf5040
};

