/**
 * Mesh Viewer for PRO UI
 * Author: Miguel A. Risco-Castillo (MRISCOC)
 * version: 3.13.1
 * Date: 2022/03/27
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../../../core/types.h"
#include "../../../feature/bedlevel/bedlevel.h"

class MeshViewerClass {
public:
  float max, min;
  void Draw(bool withsave = false);
  void DrawMesh(bed_mesh_t zval, const uint8_t sizex, const uint8_t sizey);
};

extern MeshViewerClass MeshViewer;

void Goto_MeshViewer();
